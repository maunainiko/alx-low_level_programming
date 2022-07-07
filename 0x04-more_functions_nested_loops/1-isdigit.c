#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: The character to be checked
 * Return: 1 if it is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
