#include "main.h"
#include <stdio.h>

/**
* _strspn - fills memory with a constant byte.
* @s: the address of memory to print
* @accept: the size of the memory to print
*
* Return: Nothing.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	unsigned int y;
	unsigned int a = 0;
	unsigned int z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		a = z;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				z++;
			}
		}
		if (a == z)
		{
			break;
		}
	}
	return (z);
}
