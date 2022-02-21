#include "main.h"
#include <stdio.h>

/**
* _strchr - fills memory with a constant byte.
* @s: the address of memory to print
* @c: the size of the memory to print
*
* Return: Nothing.
*/
char *_strchr(char *s, char c)
{

	for (; *s != '\0'; s++)
	{

		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
