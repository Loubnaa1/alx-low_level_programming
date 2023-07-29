#include "main.h"
/**
 * create_file - creates a file.
 * @filename: the file to create.
 * @text_content: the string to be written to the file.
 * Return: 1 or -1 if fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, error, size = 0;

	if (filename)
	{
		fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
		if (fd > 0)
		{
			while (text_content && text_content[size] != '\0')
				size++;
			error = write(fd, text_content, size);
			close(fd);
			return ((error >= 0) ? 1 : -1);
		}
	}
	return (-1);
}
