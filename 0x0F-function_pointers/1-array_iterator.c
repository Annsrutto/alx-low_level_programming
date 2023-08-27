#include "function_pointers.h"
/**
 * array_iterator - iterate
 * @array: the array
 * @size: size of aray
 * @action: func called
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
