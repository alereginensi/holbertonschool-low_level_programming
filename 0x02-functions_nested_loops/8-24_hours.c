#include "main.h"
/**
 * jack_bauer - jdsjsdj
 *
 * @min: sdjsadka
 * @hor: jdajsd
 *
 * Return: Always 0 (Sucess)
 **/

void jack_bauer(void)
{
	int hor;
	int min;

	for (hor = 0; hor < 24; hor++)

	{

		for (min = 0; min < 60; min++)

		{

			_putchar(hor / 10 + '0');
			_putchar(hor % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
		}
	}
}

