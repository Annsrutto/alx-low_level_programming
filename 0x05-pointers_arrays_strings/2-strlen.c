#include "main.h"

/**
 * _strlen - prog returns the length of a string
 * @s - string
 * Return: Length
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
