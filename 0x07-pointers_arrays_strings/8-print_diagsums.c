#include "main.h"

/**
 * print_diagsums - Print the sum of two diagonals of square matrix
 * @a: pointer to the start of matrix
 * @size: the size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int d, total1 = 0, total2 = 0;

	for (d = 0; d <= (size * size); d++)
	{
		if (d % (size + 1) == 0)
			total1 += *(a + d);
		if (d % (size - 1) == 0 && d != 0 && d < size * size - 1)
			total2 += *(a + d);
	}
	printf("%d, %d\n", total1, total2);
}
