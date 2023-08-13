//#include<stdio.h>
#include <unistd.h>

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, msg, sizeof(msg));
	return (1);
}
