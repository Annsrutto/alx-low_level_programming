#include <stdlib.h>
#include "main.h"
/**
  * array_range - creates integer array
  * @min: first number and start of range
  * @max: end of range
  * Return:pointer to array
  */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; min++, i++)
	{
		p[i] = min;
	}
	return (p);
}

