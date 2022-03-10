#include "variadic_functions.h"

/**
 * print_numbers - numbers
 * @separator: variable
 * @n: variable
 * Return: operation
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argptr;
	unsigned int count = 0;

	va_start(argptr, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(argptr, int));

	if (separator != NULL && count != (n - 1))
	{
		printf("%s", separator);
	}
	}
	va_end(argptr);

	printf("\n");
}

