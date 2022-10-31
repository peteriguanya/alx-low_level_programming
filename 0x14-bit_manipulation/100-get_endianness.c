#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_endianness - function that checks endianness
 *
 * Return: 1 if little endian or 0 if big endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
