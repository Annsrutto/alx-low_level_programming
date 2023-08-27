#include "function_pointers.h"
/**
 * int_index - searches for index
 * @array: array to be indexed
 * @size: size of array
 * @cmp: ptr to func
 * Return: -1 on fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
