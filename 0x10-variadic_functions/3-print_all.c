#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c -  a function that prints anything
 * @c: char to print
 *
 * Return: void
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: void
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_i - prints an int
 * @i: int to print
 *
 * Return: void
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - prints a float
 * @f: float to print
 *
 * Return: void
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int d, e;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};
	va_list valist;
	char *separator = "";

	va_start(valist, format);
	d = 0;
	while (format && format[d])
	{
		e = 0;
		while (p[e].t != NULL)
		{
			if (*(p[e].t) == format[d])
			{
				printf("%s", separator);
				p[e].f(valist);
				separator = ", ";
				break;
			}
			e++;
		}
		d++;
	}
	va_end(valist);
	printf("\n");
}
