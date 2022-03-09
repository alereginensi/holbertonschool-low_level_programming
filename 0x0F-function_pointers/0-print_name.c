#include "function_pointers.h"
/**
 * print_name - name
 * @name: name
 * @f: pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
