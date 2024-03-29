#include "main.h"
/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The string to be added to the end of the file.
 * Return: On success, returns 1. On failure, returns -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, error = -1, size = 0;

	if (filename)
	{
		fd = open(filename, O_RDWR | O_APPEND);
		if (fd > 0)
		{
			if (text_content)
			{
				while (text_content[size] != '\0')
					size++;
				error = write(fd, text_content, size);
			}
			else
				error = 1;
			close(fd);
		}
	}
	return ((error >= 0) ? 1 : -1);
}
