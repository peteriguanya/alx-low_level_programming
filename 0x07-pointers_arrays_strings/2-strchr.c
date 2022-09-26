#include "main.h"

/**
 * _strchr - finds occurrence of the character c in the string s
 * @s: string
 * @c: character
 *
 * Return: Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
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
