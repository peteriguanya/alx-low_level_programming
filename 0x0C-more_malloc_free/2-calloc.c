#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for array using malloc
 * @nmemb: number of members in the array
 * @size: size in bytes of elements
 *
 * Return: void pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0
		char *d;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = nmemb * size;
	d = malloc(b);

	if (d == NULL)
		return (NULL);

	while (a < b)
	{
		d[a] = 0;
		a++;
	}

	return (d);
}
