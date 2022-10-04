#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string main gives us
 * @s2: second string main gives us
 * Return: the pointer or null if string is null
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int d = 0;
	int f = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[d])
		d++;
	while (s2[f])
		f++;
	p = malloc(1 + (sizeof(char) * d) + (sizeof(char) * f));
	if (p == NULL)
		return (NULL);
	d = 0;
	while (s1[d])
	{
		p[d] = s1[d];
		d++;
	}
	f = 0;
	while (s2[f])
	{
		p[d] = s2[f];
		d++;
		f++;
	}
	p[d] = s2[f];
	return (p);
}
