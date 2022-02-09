#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	_putchar((num % 10) + '0');
	_putchar('\n');
}
