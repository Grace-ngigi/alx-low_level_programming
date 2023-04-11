#include "main.h"
#include <stdlib.h>

/**
 * main - copies the content of a file to another file
 * @argc: args count
 * @argv: array of args
 * Return: 1 if success, -1 if error
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r_file, w_file;
	char *buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't red from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((r_file = read(fd_from, buff, sizeof(buff))) > 0)
	{
		w_file = write(fd_to, buff, r_file);
		if (w_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file%s\n", argv[2]);
			_close(fd_from);
			_close(fd_to);
			exit(99);
		}
	}
	if (r_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't rad from file%s\n", argv[1]);
		_close(fd_from);
		_close(fd_to);
		exit(98);
	}
	return (0);
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
