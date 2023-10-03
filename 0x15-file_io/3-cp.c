#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include "main.h"

void print_message(char *mess);
/**
 * main - copy content of file to other file
 * @ac: number of args
 * @av: argumens array
 * Return: Always 0. with differt exit.
 */
int main(int ac, char **av)
{
	int i = 0, file_from, file_to;
	char buf[1024];
	size_t read_bytes;

	if (ac != 3)
	{
		print_message("Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	if (file_from < 0)
	{
		print_message("Error: Can't read from file ");
		while (av[1][i] != '\0')
		{
			write(2, &av[1][i], 1);
			i++;
		}
		write(2, &"\n", 1);
		exit(98);
	}

	file_to = open(av[2], O_WRONLY | O_CREAT, 0664);
	if (file_to < 0)
	{
		print_message("Error: Can't write to ");
		while (av[2][i] != '\0')
		{
			write(2, &av[2][i], 1);
			i++;
		}
		write(2, &"\n", 1);
		close(file_from);
		exit(99);
	}

	while ((read_bytes = read(file_from, buf, sizeof(buf))) > 0)
		write(file_to, buf, read_bytes);

	if (close(file_from) < 0)
	{
		print_message("Error: Can't close fd ");
		write(2, &file_from, 1);
		write(2, &"\n", 1);
		exit(100);
	}

	if (close(file_to) < 0)
	{
		print_message("Error: Can't close fd ");
		write(2, &file_from, 1);
		write(2, &"\n", 1);
		exit(100);
	}
	return (0);
}

/**
 * print_message - print error message
 * @mess: error message
 * Return: void
*/
void print_message(char *mess)
{
	int i = 0;

	while (mess[i] != '\0')
	{
		write(2, &mess[i], 1);
		i++;
	}
}
