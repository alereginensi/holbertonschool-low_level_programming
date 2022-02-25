#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: argc
 * @argv: argv
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (argc == 3)
	{
		int i = atoi(argv[1]);
		int j = atoi(argv[2]);

		int x = (i * j);
		printf("%d\n", x);
		break;
	}
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
