#include "main.h"

/**
 * _strchr - finds occurrence of the character c in the string s
 * @s: string
 * @c: character
 *
 * Return: Pointer to spot in s with c or null
 */

char *_strchr(char *s, char c)
{
	int d;

	for (d = 0; s[d] >= '\0'; d++)
	{
		if (s[d] == c)
			return (s + d);
	}

	return (0);
}
