#include <stdio.h>
/**
 * main - dsajjs
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	//sizeof evaluates the size of a variable
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of long int: %zu bytes\n", sizeof(longintType));
	printf("Size of char: %zu byte\n", sizeof(charType));
	printf("Size of long long int: %zu byte\n", sizeof(longlongintType));

	return (0);
}
