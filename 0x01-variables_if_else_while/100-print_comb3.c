#include <stdio.h>
/**
*main - entry point
*Declaration: a program that prints all combinations of two digits
*Return: (0)
*/
int main(void)
{
int digit1, digit2;

for (digit1 = 0; digit1 < 10; digit1++)
{
for (digit1 < 10; digit2 != digit1 && digit2 < digit1; digit2++)
putchar((digit1 % 10) + '0');
putchar((digit2 % 10) + '0');
if (digit1 + digit2 != 17)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
