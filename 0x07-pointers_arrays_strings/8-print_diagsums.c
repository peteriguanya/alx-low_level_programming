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
	int b, n, total1 = 0, total2 = 0;

	for (b = 0; b <= (size * size); b = b + size + 1)
		total1 = total1 + a[b];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		total2 = total2 + a[n];
	printf("%d, %d\n", total1, total2);
}
