#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (size = 0; array[size] != '\0'; size--)
	{
		action(*array);
		array++;
	}
}
