#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
#define NUM_SIZE  16
/* betty style doc for function main goes there */
/**
 * main - My Main Program
 *Return: Eroor or Success (0)
*/
int main(void)
{
char num[NUM_SIZE] = "0123456789abcdef";
/* your code goes there */
int i = 0;
for (i = 0; i < NUM_SIZE; i++)
{
putchar(num[i]);
}
putchar('\n');
return (0);
}
