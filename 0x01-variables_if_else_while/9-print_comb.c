#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
#define NUM_SIZE  10
/* betty style doc for function main goes there */
/**
 * main - My Main Program
 *Return: Eroor or Success (0)
*/
int main(void)
{
/* your code goes there */
int i = 0;
for (i = 0; i < NUM_SIZE; i++)
{
if(i==9)
{
putchar((i + 48));
break;
}
putchar((i + 48));
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
