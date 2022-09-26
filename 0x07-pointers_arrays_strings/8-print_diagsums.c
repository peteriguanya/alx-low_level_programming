#include "main.h"

/**
 * print_diagsums - Print the sum of two diagonals of square matrix
 * @a: pointer to start of matrix
 * @size: the width of matrix column
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, n, total1 = 0, total2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		total1 = total1 + a[i];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		total2 = total2 + a[n];
	printf("%d, %d\n", total1, total2);
}
