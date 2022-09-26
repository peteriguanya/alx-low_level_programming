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
	int e, sum1 = 0, sum2 = 0;

	for (e = 0; e < size; e++)
	{
		sum1 += a[(size + 1) * e];
		sum2 += a[(size - 1) * (e + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
