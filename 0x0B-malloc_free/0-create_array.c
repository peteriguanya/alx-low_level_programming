#include "main.h"

/**
 * create_array - a function that creates array of chars, and initializes it
 * @size: size that main function sends us
 * @c: character that we are sent
 * Return: the pointer if successful, NULL if not
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	return (p);
}
