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
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
