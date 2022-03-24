#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: variable
 *
 * Return: Always 0.
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	i++;

	return (i);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: char
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int k = 1;
	unsigned int val = 0;
	int c;
	int len;

	len = _strlen(b);

	if (b == NULL)
	{
		return (0);
	}

	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
		{
			return (0);
		}
	if (b[c] == '1')
	{
		val += k;
	}
	k *= 2;
	}
	return (val);
}


