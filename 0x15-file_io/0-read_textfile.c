#include<stdio.h>
#include<unistd.h>
#include <fcntl.h>

/**
 * read_textfile - read number of letter from file
 * @filename: file name that you need to read
 * @letters: Number of letters you need to read
 * Return: Number of letter
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int err;
	char buf[1024], c;
	size_t j, n = 0;
	size_t read_bytes;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	while ((read_bytes = read(fd, buf, sizeof(buf))) > 0)
	{
		j = 0;
		while (j < read_bytes && n < letters)
		{
			c = buf[j];
			err = write(1, &c, 1);
			if (err < 0)
				return (0);
			n++;
			j++;
		}
	}
	close(fd);
	return (n);
}
