#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - print number
*
*Description: This program will assign random numbers to the variable n
*
*Return: (0)
*/
int main(void)
{
int n;
srand(time(0);
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positif\n", n);
else if (n < 0)
printf("%d is negatif\n", n);
else
printf("%d is zero\n", n);
return (0);
}
