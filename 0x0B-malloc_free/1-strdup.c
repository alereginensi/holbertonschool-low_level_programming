#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - creates an array of chars
 * @str: string
 * Return: str
*/
char *_strdup(char *str)
{
	int x = 0;
	int y = 0;
	char *arr;

	if (str == NULL)
		return (NULL);
	while (str[x] != '\0')
	{
		x++;
	}
	x++;
	arr = malloc(x * sizeof(char));
	if (arr == NULL)
		return (NULL);
	while (y < x)
	{
		arr[y] = str[y];
		y++;
	}
	arr[y] = '\0';

	return (arr);
}
