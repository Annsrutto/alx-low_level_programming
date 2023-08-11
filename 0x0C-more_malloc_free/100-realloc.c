#include <stdlib.h>
#include "main.h"
/**
  * _realloc - reallocates memory
  * @ptr: old pointer
  * @old_size: old size
  * @new_size: new size of memory
  * Return: pointer
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
	}
	if (new_size > old_size && (ptr != NULL))
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (p);
		}
		for (i = 0; i < old_size; i++)
		{
			p[i] = ((char *)ptr)[i];
		}
		free(ptr);
	}
	return (p);
}
