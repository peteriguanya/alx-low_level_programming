#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of two diagonals of square matrix of integers
 * @a: input the pointer of matrix
 * @size: the size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, total1 = 0, total2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			total1 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			total2 += *(a + i);
	}
	printf("%d, %d\n", total1, total2);
}
