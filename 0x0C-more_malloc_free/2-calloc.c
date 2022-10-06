#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for array using malloc
 * @nmemb: number of members in the array
 * @size: size in bytes of elements
 *
 * Return: void pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *d;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = nmemb * size;
	d = malloc(b);

	if (d == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		d[a] = 0;

	return (d);
}
