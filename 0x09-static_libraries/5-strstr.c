#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: string to check for needle
 * @needle: substring to find in haystack
 *
 * Return: pointer to beginning of substring, or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *b = haystack;
		char *d = needle;

		while (*b == *d && *d != '\0')
		{
			b++;
			d++;
		}

		if (*d == '\0')
			return (haystack);
	}
	return (0);
}
