#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Entry point
 *
 * @s: pointer
 *
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
