#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string source
 * @accept: string accepted
 *
 * Return: a pointer to byte in s that matches one or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int e, n;

	for (e = 0; s[e] != '\0'; e++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[e] == accept[n])
				return (s + e);
		}
	}
	return (0);
}
