#include "variadic_functions.h"

/**
 * print_strings - strings
 * @separator: variable
 * @n: variable
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int count = 0;
	char *str;

	va_start(strings, n);

	for (count = 0; count < n; count++)
	{
		str = (va_arg(strings, char *));
		printf("%s", str);

	if (separator != NULL && count != (n - 1))
	{
		printf("%s", separator);
	}
	if (str == NULL)
	{
		printf("(nil)");
	}
	}
	va_end(strings);

	printf("\n");
}

