#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0.
 * Return: return
 * @n: variable
 */
int is_prime_number(int n)
{
	int x = 1;

	if (x <= n)
	{
	if (n <= 2)
	{
		return (0);
	}
	if (n % x == 0)
	{
		return (1);
	}
	}
	return (is_prime_number(x + 1));
}
