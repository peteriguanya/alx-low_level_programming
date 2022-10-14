#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int b;
	va_list valist;

	va_start(valist, n);
	for (b = 0; b < n; b++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
