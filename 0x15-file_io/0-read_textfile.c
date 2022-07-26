#include "main.h"

/**
* read_textfile - reads a text file and prints it to stdout
* @filename: name of text file
* @letters: number of letters it should read and print
*
* Return: 0 if file can not be opened or read, filename is NULL
* 0 if write fails or does not write expected byte amount
* else actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	read(fd, buf, letters);

	buf[letters] = '\0';

	n = write(STDOUT_FILENO, buf, letters);
	if (n == -1)
		return (0);

	close(fd);
	free(buf);

	return (n);
}
