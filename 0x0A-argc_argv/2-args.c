#include <stdio.h>

/**
 * main - Entry point
 * @argc: pointer
 * @argv: pointer
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);

	return (0);
}
