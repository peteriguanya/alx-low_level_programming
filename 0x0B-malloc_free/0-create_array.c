#include "main.h"

/**
 * create_array - a function that creates an array of chars, and initializes
 * it with a specific char
 * @size: size that main function sends
 * @c: char to send to memory
 * Return: null if size is zero or if it fails,
 * or pointer to array if everything is okay
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *d;

	d = malloc(size * sizeof(char));

	if (d == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(d + i) = c;
	}
	return (p);
}

