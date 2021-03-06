#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - sums the diagonals of a bidimentional array
 * @a: bidimentional array
 * @size: size of the array
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int count = 0;

	for (i = 0; i < size; i++)
		count += *(a + (i * size + i));
	printf("%d, ", count);
	count = 0;
	for (i = 1; i <= size; i++)
		count += *(a + (i * size - i));
	printf("%d\n", count);
}
