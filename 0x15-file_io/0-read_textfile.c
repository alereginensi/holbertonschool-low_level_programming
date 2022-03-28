#include "main.h"

/**
 * read_textfile - prints it to the POSIX standard output.
 * @filename: filename
 * @letters: letters
 * Return: size
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, size;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	size = write(STDOUT_FILENO, buffer, read(file, buffer, letters));

	if (file == -1 || size == -1)
	{
		return (0);
	}

	close(file);
	return (size);
}
