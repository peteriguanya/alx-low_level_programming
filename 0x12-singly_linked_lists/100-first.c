#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first -prints You're beat! and yet, you must allow,\n
 * I bore my house upon my back!\n
 * before the main function is executed.
 *
 * Return: Nothing.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
