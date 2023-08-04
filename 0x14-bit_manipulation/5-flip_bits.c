#include "main.h"

/**
 * flip_bits - Entry point
 *
 * @n: int
 * @m: int
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63, count = 0;
	unsigned long int current;
	unsigned long int e = n ^ m;

	while (i >= 0)
	{
		current = e >> i;
		if (current & 1)
			count++;
		i--;
	}
	return (count);
}
