#include "function_pointers.h"
/**
 * array_iterator - array
 * @size: size
 * @array: array
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (x = 0; x < size; x++)
	{
		action(*array);
		array++;
	}
}
