#include "main.h"

/**
 *create_file - a function that creates a file
 *@filename: the file name
 *@text_content: the text
 *Return: 1 if success -1 if not
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t n_write;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	while (text_content && text_content[i])
	{
		i++;
	}
	n_write = write(fd, text_content, i);
	close(fd);
	return ((n_write == -1) ? -1 : 1);
}
