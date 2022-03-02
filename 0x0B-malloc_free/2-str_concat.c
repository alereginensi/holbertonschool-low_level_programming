#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: str
*/
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int x = 0;
	int y = 0;
	int size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;

	size = x + y + 1;

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		arr[x] = s1[x];

	for (j = 0; s2[y] != '\0'; y++)
		arr[x + y] = s2[y];

	return (arr);
}
