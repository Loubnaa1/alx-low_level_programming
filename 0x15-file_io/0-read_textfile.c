#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 * or  number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, f_read, f_write;
	char *buff;

	buff = malloc(letters);
	if (buff == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(buff);
		return (0);
	}

	f_read = read(file, buff, letters);

	f_write = write(STDOUT_FILENO, buff, f_read);

	close(file);

	return (f_write);
}
