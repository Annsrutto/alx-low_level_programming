#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars and initializes it
 * @size: size of array
 * @c: input value
 *
 * Return: Pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	i = 0;
	while (1)
	{
		s = malloc(sizeof(char) * size);
		if (s == NULL)
		{
			return (NULL);
		}
		for (i = 0 ; i < size ; i++)
			s[i] = c;
	}
	return (s);
}
