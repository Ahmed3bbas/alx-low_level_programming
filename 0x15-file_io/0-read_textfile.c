#include<stdio.h>
#include<unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - read number of letter from file
 * @filename: file name that you need to read
 * @letters: Number of letters you need to read
 * Return: Number of letter
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i = 0, max, err;
	char buf[1024], c;
	size_t j, n = 0;
	size_t nbytes = sizeof(buf);
	size_t read_bytes;

	if (letters % 1024 > 0)
	{
		max = (letters / 1024) + 1;
	}
	else
	{
		max = (letters / 1024);
	}

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	while (i < max)
	{
		read_bytes = read(fd, buf, nbytes);
		if (read_bytes <= 0)
			return (0);

		j = 0;
		while (j < read_bytes && n < letters)
		{
			c = buf[j];
			err = _putchar(c);
			if (err < 0)
				return (0);
			n++;
			j++;
		}
		i++;
	}
	close(fd);
	return (n);
}
