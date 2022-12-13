#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string source
 * @accept: string accepted
 *
 * Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int d, n, value, check;

	value = 0;

	for (d = 0; s[d] != '\0'; d++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[d])
			{
				value++;
				check = 1;
			}
		}
		if (check == 0)
			return (value);
	}
	return (value);
}
