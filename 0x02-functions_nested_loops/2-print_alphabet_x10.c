#include "main.h"

/**
 * main - aaaaa
 *
 * Description: Same as above
 *
 * Return: Always 0 (Sucess)
 **/

void print_alphabet_x10(void)
{
	int i = 0;
	char letra;

	while (i++ <= 9)
	{
		for (letra = 'a'; letra <= 'z'; letra++)
		_putchar(letra);
		_putchar('\n');
	}
}
