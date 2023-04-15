#include <stdlib.h>
#include "main.h"

/**
 * _realloc - A function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 *
 * @old_size: old size in bytes of memory llocated space
 *
 * @new_size: new size in bytes of memory to be allocated
 *
 * Return: void pointer to new memory location
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (new_size > old_size)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
