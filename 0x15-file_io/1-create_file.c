#include "main.h"
/**
 * create_file - creates a file
 * @filename: char pointer to filename
 * @text_content: string to be written
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, w_file;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	w_file = write(fd, text_content, i);
	if (w_file == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
