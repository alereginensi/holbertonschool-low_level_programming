#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that concatenates two strings
 * @a: variable
 * @n: variable
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{

	int i = 0;
	int temp;

	while (i < n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
