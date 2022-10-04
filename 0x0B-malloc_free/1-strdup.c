#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to a newly allocated memory
 * @str: a string given by main
 * Return: the pointer or null if string is null
 */
char *_strdup(char *str)
{
	char *p;
	int f = 0;

	if (str == NULL)
		return (NULL);
	while (str[f])
		f++;
	p = malloc(sizeof(char) * f + 1);
	if (p == NULL)
		return (NULL);
	f = 0;
	while (str[f])
	{
		p[f] = str[f];
		f++;
	}
	p[f] = str[f];
	return (p);
}
