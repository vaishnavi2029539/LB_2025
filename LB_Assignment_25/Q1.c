/*
Write a program which displays ASCII Table. Table has columns like Symbol, Decimal,
Hexadecimal, and Octal representation of the every symbol from 0 to 255
*/
#include <stdio.h>
void displayASCIITable()
{
    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
    printf("=========================================\n");
    for (int i = 0; i <= 255; i++)
    {
        if (i < 32 || i == 127) // Non-printable characters
            printf(" \t%d\t%X\t\t%o\n", i, i, i);
        else
            printf("%c\t%d\t%X\t\t%o\n", i, i, i, i);
    }
}
int main()
{
    displayASCIITable();
    return 0;
}