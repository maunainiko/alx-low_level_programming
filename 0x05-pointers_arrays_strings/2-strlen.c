#include "main.h"

/**
 * _strlen - the length of a string
 * @s: string length to be determined
 * Return: length of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);

}
