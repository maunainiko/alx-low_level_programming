#include <stdio.h>
/**
*main - entry point
*Declaration: print all possible combination of three digits
*Return: (0)
*/
int main(void)
{
int digit1, digit2, digit3;

for (digit1 = 0; digit1 < 8; digt1++)
{
for (digit2 = 0; digit2 < 9; digit2++)
{
for (digit3 = 0; digit3 < 10; digit3++)
{
putchar((digit1 % 10) + '0');
putchar((digit2 % 10) + '0');
putchar((digit3 % 10) + '0');

if (digit1 == 7 && digit2 == 8 && digit3 == 9)
continue;

putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
