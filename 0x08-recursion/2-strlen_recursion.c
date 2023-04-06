#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Entry point
 *
 * @s: pointers
 *
 * Return: always 0
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s > '\0')
		i += _strlen_recursion(s + 1) + 1;

	return (i);
}
