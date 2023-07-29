#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: string to add to the end of file.
 * Return: 1 on success and -1 on failure.
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
