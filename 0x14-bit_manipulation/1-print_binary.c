#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints binary representation of number
 * @n: The number to representing in binary
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_divide(n);
}

/**
 * _divide - function that divides binary
 * @n: unsigned long  int type
 *
 * Return: always successful
 */
void _divide(unsigned long int n)
{
	if (n < 1)
		return;

	_divide(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
