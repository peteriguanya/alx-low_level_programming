#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of byte to store on memory
 *
 * Return: pointer void
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
