#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: first integer
 * @max: last integer
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *b, c = 0;

	if (min > max)
		return (NULL);

	b = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (b == NULL)
		return (NULL);

	while (min <= max)
	{
		b[c] = min;
		c++;
		min++;
	}

	return (b);
}
