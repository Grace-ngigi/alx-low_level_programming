#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: pointer to the file
 * @letters: no. of letters to be read and printed
 * Return: actual no. of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t w_file;
	ssize_t r_file;
	char *buffer;

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r_file = read(fd, buffer, letters);
	w_file = write(STDOUT_FILENO, buffer, r_file);
	free(buffer);
	close(fd);
	return (w_file);
}
