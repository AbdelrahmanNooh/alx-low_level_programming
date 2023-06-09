#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: pointer
 * @argv: pointer
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		num += atoi(argv[argc]);
	}
	printf("%d\n", num);
	return (0);
}
