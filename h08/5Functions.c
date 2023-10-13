// AUTHOR: Lucas Horsman
// DATE: 10/7/23
// PURPOSE: Calculates compound interest, the max of 2 doubles, the average velocity, the hypotenuse of a triangle, and a lottery using functions.

#include <stdio.h>
#include <math.h>
#include "getdouble.h"
#include <stdlib.h>

// functions

// calculates compound interest
double CalculateCompoundInterest(double principal, double interestRate, int numYears, int numPerYear)
{
    double x = principal * pow((1 + (interestRate / numPerYear)), (numPerYear * numYears));
    return x;
}
// calculates max value of two doubles
double maxDouble(double x, double y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

// calculates the average velocity of an object
double averageVelocity(double x, double y)
{
    double averageVelocity = x / y;
    return averageVelocity;
}

// calculates the hypotenuse of a triangle
double hypotenuse(double x, double y)
{
    double hypotenuse = sqrt((x * x) + (y * y));
    return hypotenuse;
}

//1 in 10 lottery
int lottery()
{
    int lottery = rand() % 10;
    return lottery;
}

int main()
{

    //compound interest
    double userPrincipal;
    double userInterestRate;
    int userNumYears;
    int userNumPerYear;
    printf("Enter principal: ");
    userPrincipal = getdouble();
    printf("Enter interest rate(input .05 if your interest rate is 5 percent): ");
    userInterestRate = getdouble();
    printf("Enter number of years: ");
    userNumYears = getdouble();
    printf("Enter number of times per year interest is compounded: ");
    userNumPerYear = getdouble();
    double amountAfterCompoundInterest = CalculateCompoundInterest(userPrincipal, userInterestRate, userNumYears, userNumPerYear);
    printf("Amount after compound interest: %lf\n", amountAfterCompoundInterest);

//find max of two doubles
    printf("Enter two doubles to find the max of: ");
    puts("Enter the first double: ");
    double max1 = getdouble();
    puts("Enter the second double: ");
    double max2 = getdouble();
    double max = maxDouble(max1, max2);
//average velocity
    printf("Enter distance traveled in meters: ");
    double distanceTraveled = getdouble();
    printf("Enter time taken in seconds: ");
    double timeTaken = getdouble();
    double averageVel = averageVelocity(distanceTraveled, timeTaken);
//hypotenuse
    printf("Enter the length of the first side of the triangle: ");
    double side1 = getdouble();
    printf("Enter the length of the second side of the triangle: ");
    double side2 = getdouble();
    double hyp = hypotenuse(side1, side2);
//lottery
    int lotteryNum = lottery();
    printf("Enter a number between 0 and 9 to see if you win the lottery: ");
    int userLotteryNum = getdouble();
    if (userLotteryNum == lotteryNum)
    {
        printf("You win the lottery!\n");
    }
    else
    {
        printf("You lose the lottery!\n");
    }

    


    printf("The max of %lf and %lf is %lf\n", max1, max2, max);
    printf("The average velocity is %lf m/s \n", averageVel);
    printf("The length of the hypotenuse is %lf\n", hyp);
}
