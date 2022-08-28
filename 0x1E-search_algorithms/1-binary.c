#include "search_algos.h"
/**
 * binary_search - Binary search algorithm
 * Return: options
 * @array: array
 * @size: size
 * @value: value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		size_t mid = (low + high) / 2;
		size_t i = low;

		printf("Searching in array: ");

		for (; i <= high; ++i)
		{
			if (i != low)
				printf(", %d", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
	return (-1);
}
