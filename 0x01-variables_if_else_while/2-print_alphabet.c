#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
#define ALPHA_SIZE  26
/* betty style doc for function main goes there */
/**
 * main - My Main Program
 *Return: Eroor or Success (0)
*/
int main(void)
{
char alpha[ALPHA_SIZE] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
/* your code goes there */
int i = 0;
for(i=0; i< ALPHA_SIZE;i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
