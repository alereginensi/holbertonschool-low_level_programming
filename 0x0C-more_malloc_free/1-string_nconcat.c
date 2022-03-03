#include "main.h"

/**
 * @o: variable
 *
 * Return: string
 * _strlen - string
 */
int _strlen(char *o)
{
	int length = 0;

	while (o[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * @s1: string 1
 * @s2: string 2
 * @n: variable
 * string_nconcat - function
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int length, x, y;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length = _strlen(s1) + n + 1;

	str = malloc(length * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0; s1[x] != '\0'; x++)
	{
		str[x] = s1[x];
	}
	for (y = 0; y < n; y++)
	{
		str[x + y] = s2[y];
	}
	str[x + y] = '\0';

	return (str);
}


