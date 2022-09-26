#include "main.h"

/**
 * _strchr - finds occurrence of the character c in the string s
 * @s: string
 * @c: character
 *
 * Return: Pointer to first occurrence of c in the s
 */

char *_strchr(char *s, char c)
{
	int d;

	for (d = 0; s[d] >= '\0'; d++)
	{
		if (s[d] == c)
			return (s + d);
	}

	return (NULL);
}
