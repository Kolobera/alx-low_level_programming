#include "main.h"

/**
 * read_textfile - reads a text file and print
 * @filename: file name
 * @letter: number of letters to print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i;
	char buf[letters + 1];
	int fd;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read(fd, buf, letters);
	for (i = 0; buf[i];)
		i++;
	buf[i + 1] = '\0';
	return (i);
}
