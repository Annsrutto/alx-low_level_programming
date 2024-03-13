#include <stdio.h>
/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t prev = 0;
	size_t i;

	while (array[jump] <= value && jump < size - 1)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
		prev = jump;
		jump += jump;
	}

	if (jump > size - 1)
	{
		jump = size - 1;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, jump);
	for (i = prev; i <= jump && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
