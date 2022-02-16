#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337.
 * @texto: string
 * Return: Always 0.
 */

char *leet(char *texto)
{
	char n[] = "4433007711";
	char l[] = "aAeEoOtTlL";
	int i, c;

	for (i = 0; texto[i] != '\0'; i++)
	{
		for (c = 0; c <= 9; c++)
		{
			if (texto[i] == l[c])
				texto[i] = n[c];
		}
	}

	return (texto);
}
