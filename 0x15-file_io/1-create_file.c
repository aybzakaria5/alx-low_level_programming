#include "main.h"

/**
 *create_file - a function that creates a file
 *@filename:  the name of the file
 *@text_content:  the content of the text
 *Return: returns 1 if success -1 if not
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	else
		return (1);


	if (text_content == NULL)
	{
		fd = creat(filename, 0600);
		return (1);
	}
	fd = creat(filename, 0600);
	write(fd, text_content, sizeof(text_content));

	if (fd == -1)
		return (-1);

			return (1);
}
