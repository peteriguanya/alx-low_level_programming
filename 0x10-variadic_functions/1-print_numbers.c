#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: separator to print between numbers
 * @n: numbers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int b;
	int num;
	va_list valist;

	va_start(valist, n);
	for (b = 0; b < n; b++)
	{
		num = va_arg(valist, int);
		printf("%d", num);
		if (b < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
