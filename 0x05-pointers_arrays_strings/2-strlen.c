#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @str: the string to get the length of
 *
 * Return: The lenght of @str
 */

int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
