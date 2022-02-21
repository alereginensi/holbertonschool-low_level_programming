#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of diags
 * @a: array
 * @size: size
 * Return: always 0.
 **/
void print_diagsums(int *a, int size)
{
	int z, s1 = 0, s2 = 0;


		for (z = 0; z < (size * size); z++)
			{
			if (z % (size + 1) == 0)
				s1 += *(a + z);
			if (z % (size - 1) == 0 && z != 0 && z < size * size - 1)
				s2 += *(a + z);
			}
	printf("%d, %d\n", s1, s2);

}
