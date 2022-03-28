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
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: content
 * Return: 1 on succes or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, writefile;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND);

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
