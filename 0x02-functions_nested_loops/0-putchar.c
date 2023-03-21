#include "main.h"
#include <stdio.h>
#include <stido.h>

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototpye
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
