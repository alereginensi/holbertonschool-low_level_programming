#include "main.h"

/**
 * puts_half - prints every other character of a string
 * @str: variable
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
		i++;
	{

	if (i % 2 == 0)
	{
		for (j = i / 2; str[j] != '\0'; j++)
		{
		_putchar(str[j]);
		}
	}
	else
	{
		for (j = (i + 1) / 2; str[j] != '\0'; j++)
		{
		_putchar(str[j]);
		}
	}
	}
	_putchar('\n');
}
