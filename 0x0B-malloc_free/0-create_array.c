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
	char *s;
	unsigned int i;

	s = (char *) malloc(sizeof(char) * size);
	if (s == 0 || s == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
		s[i] = c;
	return (s);
}
