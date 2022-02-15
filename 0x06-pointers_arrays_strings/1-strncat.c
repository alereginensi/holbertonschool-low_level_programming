#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: variable
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;


	for (i = 0; dest[i] != '\0'; ++i)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
