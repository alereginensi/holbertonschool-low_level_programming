#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: argc
 * @argv: argv
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
