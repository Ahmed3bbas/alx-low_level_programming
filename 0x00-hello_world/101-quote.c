#include <unistd.h>

/**
  * main - print message by unix
  * void
  *
  * Description: Print message
  * by using system call of unix by unistd library
  * which contains write function
  * normally use write (i.e., the one that is a system call)
  * to write to stream number 1 or
  * stream number 2
  * (which are standard output and standard error respectively).
  * Return: 1 for success process
  */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, sizeof(msg));
	return (1);
}
