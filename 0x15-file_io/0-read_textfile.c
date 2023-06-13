#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A function that reads a text file
 * and prints it to the POSIX  standard output.
 *@filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t bytes_written;
	ssize_t bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	bytes_read = read(fd, buf, letters);
	bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	free(buf);
	close(fd);
	return (bytes_written);
}
