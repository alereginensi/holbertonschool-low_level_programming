#include "variadic_functions.h"

/**
 * sum_them_all - sum
 * @n: variable
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argptr;

	unsigned int count = 0;
	unsigned int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(argptr, n);

	while (count < n)
	{
		sum += va_arg(argptr, int);

		count++;
	}
	va_end(argptr);

	return (sum);
}


