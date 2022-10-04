#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenate arguments.
 * @ac: arg counter.
 * @av: arg vector.
 * Return: pointer p.
 */
char *argstostr(int ac, char **av)
{
	int g, h = 0, m = 0;
	int f;
	char *p;
	if (ac == 0 || av == NULL)
		return (0);
	for (g = 0; g < ac; g++)
	{
		h + =  _strlen(av[g]);
	}
	p = malloc(h + 1 + ac);
	if (p == NULL)
		return (0);
	for (g = 0; g < ac; g++)
	{
		for (f = 0; f < (_strlen(av[g])); f++)
		{
			p[m] = av[g][f];
			m++;
		}
		p[m] = '\n';
		m++;
	}
	p[m] = '\0';
	return (p);
}

/**
 * _strlen - counts number of chars.
 * @ch: string.
 * Return: pointer g.
 */

int _strlen(char *ch)
{
	int g = 0;
	while (ch[g])
		g++;
	return (g);
}
