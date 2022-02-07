#include "main.h"
/**
 *  * main - aaaaa
 *   *
 *    * Description: Same as above
 *     *
 *      * Return: Always 0 (Sucess)
 *       **/
int main(void)
{
	char letter;
	int a = 0;

	for (a = 0; a <= 9; a++)
	{
		letter = 'a';
        	while (letter <= 'z')
		{	
			_putchar(letter);
			letter++;
		}
	}
	return(0);
}
