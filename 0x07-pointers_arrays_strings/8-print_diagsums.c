#include "main.h"

/**
 * print_diagsums - Print the sum of two diagonals of square matrix
 * @a: the matrix
 * @size: the size 
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int d, e, p, l=0, r=0;

	for (d = 0; d < size; d++)
	{
		p = (d * size) + i;
		l += *(a + p);
	}
	for (e = 0; e < size; e++)
	{
		p = (e * size) + (size - 1 - e);
		r += *(a + p);
	}
	printf("%d, %d\n", l, r);
}
