#include "main.h"

/**
 *read_textfile - a function that reads a file and returns the nreads
 *@filename: the file name we want to read
 *@letters: the letters in the file we want to read
 *Return: returns the number of letters or 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t nreads;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buff = malloc(letters * sizeof(char));

	if (!buff)
		return (0);

	nreads = read(fd, buff, letters);

	if (nreads == -1 || write(STDOUT_FILENO, buff, nreads) != nreads)
	{
		free(buff);
		return (0);
	}
	if (close(fd) == -1)
		return (0);
	free(buff);
	return (nreads);
}
