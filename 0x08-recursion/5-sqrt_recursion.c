#include "main.h"

/**
 * _sqrt_recursion - function returns natural square root of a number
 * @n: number to compute natural square root
 *
 * Return: void
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Computes natural square root
 * @n: number used to calculate the square root
 * @i: number to be squared
 *
 * Return: square root of a number
 */
int _sqrt(int n, int d)
{
	int sqrt = d * d;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (d);

	return (_sqrt(n, i + 1));
}
