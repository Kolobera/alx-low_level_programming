#include "main.h"

/**
 * read_textfile - reads a text file and print
 * @filename: file name
 * @letter: number of letters to print
 * Return: nb of letters priinted
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buf[letters + 1];
	int fd, i = 1, j = 1;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY | O_EXCL);
	if (fd == -1)
		i = 0;
	else
		i = read(fd, buf, letters);
	buf[letters] = '\0';

	j = write(STDOUT_FILENO, buf, i);

	if (j == -1)
		i = 0;

	close(fd);
	return (i);
}
