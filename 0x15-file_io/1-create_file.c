#include "main.h"
#include <string.h>

/**
* create_file - creates a file
* @filename: name of the file to created
* @text_content: NULL terminated string to write to the file
*
* Return: 1 on success, -1 on fail
*/

int create_file(const char *filename, char *text_content)
{
	int fd, i;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);

	i = strlen(text_content);

	if (text_content != NULL)
		write(fd, text_content, i);

	close(fd);
	return (1);
}
