#include "main.h"

/**
* append_text_to_file - Entry point
*
* @filename: name of file to be appended
*
* @text_content: content to be written to file
*
* Return: (Always/Success)
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, write_return, close_return;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	for (i = 0; text_content[i] != '\0'; i++)
	{
		;
	}

	if (text_content != NULL)
	{
		write_return = write(fd, text_content, i + 1);
		if (write_return == -1)
		{
			return (-1);
		}
	}

	close_return = close(fd);
	if (close_return == -1)
	{
		return (-1);
	}

	return (1);
}
