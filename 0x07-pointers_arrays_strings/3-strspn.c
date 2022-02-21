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

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				y++;
			}
			break;
		}
	}
	return (s[x]);
}
