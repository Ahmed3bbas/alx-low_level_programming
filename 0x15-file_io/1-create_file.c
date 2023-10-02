#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include <string.h>

/**
 * create_file - create file and write some content
 * @filename: File Name you want to create or write on it
 * @text_content: text content
 * Return: 1 for success or -1 for failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written <= 0)
			return (-1);
	}
	close(fd);
	return (1);
}
