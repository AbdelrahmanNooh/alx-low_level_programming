#include "main.h"
#include <stdio.h>

/**
 * _move - iterates
 *
 * @s2: pointer
 *
 * Return: pointer
 */

char *_move(char *s2)
{
	if (*s2 == '*')
		return (_move(s2 + 1));
	else
		return (s2);
}

/**
 * inception - reality
 *
 * @s1: pointer
 * @s2: pointer
 *
 * Return: 1 or 0
 */

int inception(char *s1, char *s2)
{
	int i = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		i += wildcmp(s1 + 1, s2 + 1);
	i += inception(s1 + 1, s2);

	return (i);
}

/**
 * wildcmp - compares
 *
 * @s1: int
 * @s2: int
 *
 * Return: 1 or 0
 */

int wildcmp(char *s1, char *s2)
{
	int i = 0;

	if (!*s1 && *s2 == '*' && !*_move(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = _move(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			i += wildcmp(s1 + 1, s2 + 1);
		i += inception(s1, s2);
		return (!!i);
	}
	return (0);
}
