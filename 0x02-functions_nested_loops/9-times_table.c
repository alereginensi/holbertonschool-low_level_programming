#include "main.h"
/**
 * times table - jdsjsdj
 *
 *
 *
 * Return: Always 0 (Sucess)
 **/

void times_table(void)
{
	int f;
	int c;

		for (f = 0; f <= 9; f++)
		{
			for (c = 0; c <= 9; c++)
			{
			_putchar(f * c);
			_putchar('\n');
			}
		}	
}

