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
	
	p = malloc(h + 1 + ac);
	if (p == NULL)
		return (0);
	for (g = 0; g < ac; g++)
		p[m] = av[g][f];
	m++;
	p[m] = '\n';
	m++;

	p[m] = '\0';
	return (p)
}
