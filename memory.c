#include "shell.h"

/**
 * bfree - frees a poinnter
 * @ptr: address of the pointer
 *
 * Return: 1 if freed
 */

int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
