#include "main.h"
int str_len(char *s);
/**
 * append_text_to_file - append text to the end of file
 * @filename: filename
 * @text_content: text to add
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_WRONLY | O_APPEND | O_EXCL);
	if (fd < 0)
		return (-1);
	i = write(fd, text_content, str_len(text_content));
	if (i == -1)
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
