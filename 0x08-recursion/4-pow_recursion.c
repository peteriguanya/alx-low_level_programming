#include "main.h"

/**
 * _pow_recursion - function that returns the natural square root of a number
 * @x: the number to multiply
 * @y: the times to multiply the number
 *
 * Return: void
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
