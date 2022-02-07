#include "main.h"

/**
 * print_alphabet - aaaaa
 *
 * Description: Same as above
 *
 * Return: Always 0 (Sucess)
 **/

void print_alphabet(void)
{
	char letter = 'a';

        while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
