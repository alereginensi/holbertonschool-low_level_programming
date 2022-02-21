#include "main.h"
#include <stdio.h>

/**
* _strpbrk - fills memory with a constant byte.
* @s: the address of memory to print
* @accept: the size of the memory to print
*
* Return: Nothing.
*/
char *_strpbrk(char *s, char *accept)
{
	int y;

	for (; *s != '\0'; s++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (*s == accept[y])
			{
				return (s);
			}
		}
		if (*s == *accept)
		{
			return (s);
		}
	}
	return ('\0');
}
