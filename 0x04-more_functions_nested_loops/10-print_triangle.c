#include "holberton.h"

/**
 * print_triangle - print a triangle
 *
 * @size: integer
 *
 * Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int high, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (high = 1; high <= size; high++)
		{
			for (base = 1; base <= size; base++)
			{
				if (y <= size - x)
					_putchar (' ');
				else
					_putchar ('#');
			}
			_putchar('\n');
		}
	}
}
