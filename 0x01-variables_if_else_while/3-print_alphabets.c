#include <stdio.h>
/**
*main - entry point
*Description: Program that prints alphabet letters in lowercase and uppercase
*Return: (0)
*/
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
