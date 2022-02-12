#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies the string
 * @dest: variable
 * @src: variable
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] < '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
