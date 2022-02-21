#include "main.h"
#include <stdio.h>

/**
* _memcpy - fills memory with a constant byte.
* @src: the address of memory to print
* @dest: the size of the memory to print
* @n: variable
*
* Return: Nothing.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
