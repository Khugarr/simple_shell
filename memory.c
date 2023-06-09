#include "shell.h"
/**
 * bfree - free the point and NULL the address
 * @ptr: address of the pointer to free
 * Return: 1 if free, otherwise 0.
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
