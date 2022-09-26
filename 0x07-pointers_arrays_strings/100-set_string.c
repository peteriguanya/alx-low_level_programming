#include "main.h"

/**
 * set_string - value of a pointer to char
 * @s: the value to change
 * @to: the value to allocate
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
