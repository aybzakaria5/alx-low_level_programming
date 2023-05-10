#include "main.h"
#define BUFF_SIZE 1024

void close_func(int fd);
/**
 *close_func - a function that check err with no closing
 *@fd: the file descriptor
 *
 */
void close_func(int fd)
{
	int c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, ERR_CLOSE, fd);
		exit(100);
	}
}

/**
 *main - a function that copy from a file to another file
 *@argc: argument counter
 *@argv: argument value
 *Return: 0 if success
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, n_reads;
	char *buf[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, ERR_ARGS);
			exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, ERR_READ, argv[1]);
			exit(98);
	}

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, ERR_READ, argv[2]);
		exit(99);
	}

	while ((n_reads = read(fd_from, buf, BUFF_SIZE))  > 0)
	{
		if (write(fd_to, buf, n_reads) != n_reads)
		{
			dprintf(STDERR_FILENO, ERR_WRITE, argv[2]);
			exit(99);
		}
	}
	if (n_reads == -1)
		dprintf(STDERR_FILENO, ERR_READ, argv[1]);
			exit(98);
	close_func(fd_from);
	close_func(fd_to);
	free(buf);
	return (0);
}
