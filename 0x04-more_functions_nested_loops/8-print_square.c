#include "main.h"

/**
 * print_square - draws a straight line in the terminal.
 * @size: num
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int num = 0;
	int space;

	if (size > 0)
	{
	while (num < size)
	{
		for (space = 0; space < size; space++)
		{
			_putchar('#');
		}
		_putchar('\n');
		num++;
	}
	}
	else
	{
		_putchar('\n');
	}
}
