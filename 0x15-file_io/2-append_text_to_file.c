#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file to append text to.
 * @text_content: text to append to the file.
 *
 * Return: On success, 1. On failure, -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd, n_written;
    size_t text_len = 0;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    if (text_content != NULL)
    {
        while (text_content[text_len])
            text_len++;
    }

    n_written = write(fd, text_content, text_len);
    if (n_written != (int)text_len)
    {
        close(fd);
        return (-1);
    }

    close(fd);
    return (1);
}

