#include "main.h"

/**
 * print_line - print a line on the terminal
 *
 * @n: the number of _ characters to be printed
 */

void print_line(int n)
{
	int lin;

	if (n > 0)
	{
		for (lin = 0; lin < n; lin++)
			_putchar('_');
	}

	_putchar('\n');

}
