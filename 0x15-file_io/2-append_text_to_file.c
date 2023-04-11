#include "main.h"
/**
 * append_text_to_file - apends text at the end of  file
 * @filename: char pointer to the file name
 * @text_content: string to be appended at the end
 * Return: 1 if success, -1 if error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, w_file;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
	w_file = write(fd, text_content, i);

	if (w_file == -1)
		return (-1);
	}
	close(fd);
	return (1);
}
