#include "main.h"
int str_len(char *);
/**
 * create_file - create a file
 * @filename: name of file
 * @text_content: text content
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, j;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC | O_EXCL, 0600);
	if (fd < 0)
	{
		if (errno == EEXIST)
		{
			fd = open(filename, O_WRONLY | O_TRUNC);
			if (fd == -1)
				return (-1);
		}
		else
			return (-1);
	}
	j = write(fd, text_content, str_len(text_content));
	if (j == -1)
		return (-1);
	close(fd);
	return (1);
}

/**
 * str_len - size of a string
 * @s: string
 * Return:len
 */

int str_len(char *s)
{
	int len = 0;

	while (s[len++])
		continue;
	return (len - 1);
}
