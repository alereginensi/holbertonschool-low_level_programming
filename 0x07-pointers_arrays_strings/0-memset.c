#include "main.h"
#include <stdio.h>

/**
* _memset - fills memory with a constant byte.
* @s: the address of memory to print
* @b: the size of the memory to print
* @n: variable
*
* Return: Nothing.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
