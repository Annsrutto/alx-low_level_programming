#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers using
 * the Linear search algorithm
 *
 * @array: pointer to the first element
 * @size: number of elements in array
 * @value: value to search
 * Return: the first index, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
