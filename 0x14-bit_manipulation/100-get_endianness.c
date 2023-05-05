#include "main.h"

/**
 * get_endianness - Entry point
 *
 * Return: void
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
