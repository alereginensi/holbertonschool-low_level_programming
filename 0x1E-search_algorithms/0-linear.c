#include "search_algos.h"
/**
 * linear_search - Linear search algorithm
 * Return: options
 * @array: array
 * @size: size
 * @value: value
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}
	else
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			return (i);
		}
		return (-1);
	}
}
