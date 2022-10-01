#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x1 = 0, x2 = 0;

	if (argc == 3)
	{
		x1 = atoi(argv[1]);
		x2 = atoi(argv[2]);
		printf("%d\n", x1 * x2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
