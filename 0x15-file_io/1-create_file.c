#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include <string.h>

/**
 * create_file - create file and write some content
 * @filename: File Name you want to create or write on it
 * @text_content: text 
 * Return: 1 for success or -1 for failure 
*/
int create_file(const char *filename, char *text_content)
{
	int fd, max, l, i = 0;
	char buf[1024];
	size_t nbytes;
        ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	l = strlen(text_content);
	fd = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fd < 0)
		return (-1);

	if (l % 1024 > 0)
	{
		max = (l / 1024) + 1;
	}
	else
	{
		max = l / 1024;
	}

	while (i < max)
	{
		if (text_content != NULL)
		{
		strcpy(buf, text_content);
		nbytes = strlen(buf);
		bytes_written = write(fd, buf, nbytes);
		if (bytes_written <= 0)
			return (-1);
		}
		else
		{
			break;
		}
		i++;
	}
	close(fd);
	return(1);
}
