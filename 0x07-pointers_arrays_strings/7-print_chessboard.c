#include "main.h"

/**
* print_chessboard - fills memory with a constant byte.
* @a: the address of memory to print
*
* Return: Nothing.
*/
void print_chessboard(char (*a)[8])
{
	int n;
	int i;

	for (n = 0; n < 8; n++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[n][i]);
		}
		_putchar('\n');
	}
}
