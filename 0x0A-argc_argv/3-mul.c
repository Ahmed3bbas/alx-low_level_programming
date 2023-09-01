#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *Multiply - Multiply two Integers
 *@a: First Number
 *@b: Second Number
 *Return: Multipiplication Result
 */
int Multiply(int a, int b)
{
return ((int)(a * b));
}
/**
 *main - check the code
 *@argc: Counter of Arguments
 *@argv: Argument Array
 *Return: 0 Success, 1 Error.
 */
int main(int argc, char *argv[])
{
int sum = 0;
int n1 = 0;
int n2 = 0;
if (argc == 3)
{
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
sum = Multiply(n1, n2);
printf("%d\n", sum);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}

