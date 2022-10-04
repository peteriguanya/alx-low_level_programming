#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * alloc_grid - function that returns a pointer to a 2d array
 * @width: the rows.
 * @height: the vert
 * Return: the pointer or null if failure
 */
int **alloc_grid(int width, int height)
{
	int **pointer;
	int b, d;

	if (width <= 0 || height <= 0)/* A */
		return (NULL);
	if (width > INT_MAX || height > INT_MAX)
		return (NULL);
	pointer = malloc(height * sizeof(int *));/* D */
	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}
	for (b = 0; b < height; b++)/* E */
	{
		pointer[b] = malloc(width * sizeof(int));
		if (pointer[b] == NULL)
		{
			for ( ; b >= 0; b--)
				free(pointer[b]);
			free(pointer);
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)/* F */
		for (d = 0; d < width; d++)
			pointer[b][d] = 0;
	return (pointer);/* G */
}
