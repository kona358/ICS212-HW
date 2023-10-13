

#include <stdio.h>

// This program takes a single digit number as input and prints its name in Spanish.
//  If the input is not a single digit number, the program prints "Error: '"."+number+"is not a valid input"
int main(void)
{

    int number;
    printf("Enter a number between 0 and 9: ");
    number = getchar();

    if (number == '\n')
    {
        printf("Error:'%c' is not a valid input", number);
        return 0;
    }

    int nextChar = getchar();
    if (nextChar != '\n')
    {
        printf("Error: too many characters");
        return 0;
    }

    switch (number)
    {
    case '0':
        printf("Spanish Number: cero\n");
        break;
    case '1':
        printf("Spanish Number: uno\n");
        break;
    case '2':
        printf("Spanish Number: dos\n");
        break;
    case '3':
        printf("Spanish Number: tres\n");
        break;
    case '4':
        printf("Spanish Number: cuatro\n");
        break;
    case '5':
        printf("Spanish Number: cinco\n");
        break;
    case '6':
        printf("Spanish Number: seis\n");
        break;
    case '7':
        printf("Spanish Number: siete\n");
        break;
    case '8':
        printf("Spanish Number: ocho\n");
        break;
    case '9':
        printf("Spanish Number: nueve\n");
        break;
    default:
        printf("Error: '%c' is not a valid input", number);
        break;
    }

    return 0;
}
