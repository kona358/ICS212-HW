
#include <stdio.h>
#include "getdouble.h"
const double DAYS_IN_YEAR = 365.25;

// calculations are off slightly due to compounding rounding errors in function
int calculateDays(int day, int month, int year)
{
    return ((year * DAYS_IN_YEAR) + ((month - 1) * (DAYS_IN_YEAR / 12.0)) + day);
}
int main(void)
{

    int inputDay, inputYear, inputMonth;
    int currentDay = 21;
    int currentMonth = 9;
    int currentYear = 2023;

    puts("This program will calculate your age in days");
    puts("please enter the day you were born");
    //gets input from user
    inputDay = (int)getdouble();

    puts("please enter the month you were born: ");
    inputMonth = (int)getdouble();

    puts("please enter the year you were born: ");
    inputYear = (int)getdouble();
//%d is used for ints
    printf("Todays Date is %d/%d/%d\n", currentMonth, currentDay, currentYear);

    // calculate age
    double daysSinceBirth = calculateDays(inputDay, inputMonth, inputYear);
    double currentDays = calculateDays(currentDay, currentMonth, currentYear);
    double ageInDays = currentDays - daysSinceBirth;

    int thousands = (int)(ageInDays / 1000);
    int remainder = (int)(ageInDays) % 1000;
//%d prints just the digit(s) in the thousands, then ,%03d prints the remainder int to 3 places
    printf("Your age in days: %d,%03d\n", thousands, remainder);

    return 0;
}
