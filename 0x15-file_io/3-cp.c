#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: args count
 * @argv: array of args
 * Return: 1 if success, -1 if error
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r_file, w_file;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buffer(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	r_file = read(fd_from, buff, 1024);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_from == -1 || r_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't red from file %s\n", argv[1]);
		free(buff);
		exit(98);
	}
	w_file = write(fd_to, buff, r_file);
	if (fd_to == -1 || w_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buff);
		exit(99);
	}
	r_file = read(fd_from, buff, 1024);
	fd_to = open(argv[2], O_WRONLY | O_APPEND);
	if (r_file > 0)
	{
		free(buff);
		_close(fd_from);
		_close(fd_to);
	}
	return (0);
}

/**
 * create_buffer - creates a buffer
 * @filename: pointer to a file
 * Return: chr pointer to the created buffer
 */

char *create_buffer(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
	return (buff);
}

/**
 * _close - closes a file
 * @fd: file descriptor to be closed
 * return: nothing
 */
void _close(int fd)
{
	int f = close(fd);

	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant close fd %d\n", fd);
		exit(100);
	}
}
