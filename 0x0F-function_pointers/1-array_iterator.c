#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array
 * @array: input array
 * @size: size of array
 * @action: the pointer to the function
 * Return: no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int b;

	if (array && action)

		for (b = 0; b < size; b++)
			action(array[b]);
}
