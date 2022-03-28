#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: variable
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content
 * Return: 1 on succes or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, writefile;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	writefile = write(file, text_content, _strlen(text_content));

	if (writefile == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
