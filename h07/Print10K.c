#include <stdio.h>

int main(void)
{
    // define arrays
    char *units[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    char *tens[] = {"", "", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    char *specialTens[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciseis", "diecisiete", "dieciocho", "diecinueve"};
    char *hundreds[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};
    char *thousands[] = {"", "mil", "dos mil", "tres mil", "cuatro mil", "cinco mil", "seis mil", "siete mil", "ocho mil", "nueve mil"};

    for (int i = 1; i <= 9999; i++)
    {
        // get digits of the number
printf("%d ", i);
        int ones_digit = i % 10;
        int tens_digit = (i / 10) % 10;
        int hundreds_digit = (i / 100) % 10;
        int thousands_digit = (i / 1000) % 10;

        // print thousands component
        if (thousands_digit != 0)
        {
            printf("%s ", thousands[thousands_digit]);
        }
        // print hundreds component
        if (hundreds_digit != 0)
        {
            printf("%s ", hundreds[hundreds_digit]);
        }
        // 10-19 in spanish are weird so we have to print them differently
        if (tens_digit == 1)
        {
            printf("%s ", specialTens[ones_digit]);
        }
        else
        {
            // print tens component
            // print ones component
            printf("%s ", tens[tens_digit]);

            // print "and" for numbers like 21, 32, 43, etc.
            if (tens_digit != 0 && ones_digit != 0)
            {
                printf("y ");
            }
            
            printf("%s ", units[ones_digit]);
        }
        printf("\n");
    }
}
