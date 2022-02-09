#include "main.h"

/**
 * print_diagonal - draws a straight line in the terminal.
 * @n: num
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int tab = 0;
	int space;

	if (n > 0)
	{
	while (tab < n)
	{
		for (space = 0; space < tab; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		tab++;
	}
	}
	else
	{
		_putchar('\n');
	}
}
