#include "holberton.h"

/**
 * puts2 - prints a string character by character
 * @str: string to print
 *
 * Return: d
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}
