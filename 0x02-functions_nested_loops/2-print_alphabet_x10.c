#include "main.h"

/**
 *print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 *
 */
void print_alphabet_x10(void)

{
	int k = 0;
	char ch;

	while (k++ <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
