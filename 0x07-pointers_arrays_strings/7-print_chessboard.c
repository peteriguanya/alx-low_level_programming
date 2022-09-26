#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a: array of pieces to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int c, n;

	for (c = 0; c < 8; c++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[i][n]);
		_putchar('\n');
	}
}
