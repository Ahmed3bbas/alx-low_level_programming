#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(int argc, __attribute__((__unused__))char * argv[])
{
int sum = 0;
while (argc > 0)
{
sum++;
argc--;
}
printf("%d\n", sum);
return (0);
}

