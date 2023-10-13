/*Will output "Aloha!"*/
#include <stdio.h>
#include "getdouble.h"

int main(void)
{
    char char1, char2;
    double num1, num2;

    printf("Enter the first letter: ");
    char1 = getchar();
    getchar();

    printf("The first letter is: '%c'", char1);

    printf("\nEnter a second letter ");
    char2 = getchar();
    getchar();
    printf("The second letter is: '%c'", char2);

printf("\nPlease enter a number: ");
num1 = getdouble();
    printf("The first number is: '%lf'", num1);

printf("\nPlease enter another number: ");
num2 = getdouble();
    printf("The second number is: '%lf'", num2);


    return 0;
}
