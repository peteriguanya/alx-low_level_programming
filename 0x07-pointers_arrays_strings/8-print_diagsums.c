#include "main.h"

/**
 * print_diagsums - Print the sum of two diagonals of square matrix
 * @a: pointer to the start of the matrix
 * @size: the size of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int f, sum1 = 0, sum2 = 0;

	for (f = 0; f < size; f++)
	{
		sum1 += a[(size + 1) * f];
		sum2 += a[(size - 1) * (f + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
