#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *
 *         separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long n1 = 0, n2 = 1, n3

	for(inc = 0; inc < 50; inc++;)
	{
		n3 = n1 + n2;
		printf("%lu", n3);

		n1 = n2;
		n2 = n3;

		if (inc == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
