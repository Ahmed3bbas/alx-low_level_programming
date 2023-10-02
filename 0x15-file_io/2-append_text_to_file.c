#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

/**
 * append_text_to_file - append text on file
 * @filename: File Name you want to create or write on it
 * @text_content: text
 * Return: 1 for success or -1 for failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{

		write(fd, text_content, strlen(text_content));

	}
	close(fd);
	return (1);
}
