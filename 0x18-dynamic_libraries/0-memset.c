#include "main.h"

/**
 * _memset - Fill memory area pointed to with a constant byte
 * @s: memory block to fill
 * @b: constant byte to fill
 * @n:number bytes of memory area to be used
 *
 * Return: Returns a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		s[c] = b;
	return (s);
}
