#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * Return: return
 * @n: variable
 */
int _sqrt_recursion(int n)
{
	int x, y;

	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
		return (n);
	}
	else
	{
		y = _sqrt_recursion(n >> 2) << 1;
		x = y + 1;

	if (x * x > n)
	{
		return (y);
	}
	else
	{
		return (x);
	}
	}
}
