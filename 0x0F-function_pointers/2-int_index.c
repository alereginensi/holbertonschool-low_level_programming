#include "function_pointers.h"
/**
 * int_index - int
 * @array: array
 * @size: size
 * @cmp: cmp
 * Return: a
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		if ((cmp)(array[x]) != 0)
		{
			return (x);
		}
	}
	return (-1);
}


