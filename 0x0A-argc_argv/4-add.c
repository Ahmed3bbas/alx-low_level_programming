#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *Add - Add two Integers
 *@a: First Number
 *@b: Second Number
 *Return: Addition  Result
 */
int Add(int a, int b)
{
return ((int)(a + b));
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
int i = 0;
int j = 0;
int res = 0;
int n1_d = 0;
int n2_d = 0;
char ErrorMsg[] = "Error";
if (argc == 3)
{
while (argv[1][i] != '\0')
{
if (argv[1][i] >= '0' && argv[1][i] <= '9')
{
n1_d++;
}
else
{
continue;
}
i++;
}
while (argv[2][j] != '\0')
{
if (argv[2][j] >= '0' && argv[2][j] <= '9')
{
n2_d++;
}
else
{
continue;;
}
j++;
}
}
else if (argc == 1)
{
sum = 0;
}
else
{
res = 1;
}
if (res == 1)
{
printf("%s\n", ErrorMsg);
}
else if ((i == n1_d) && (j == n2_d))
{
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
sum = Add(n1 , n2);
printf("%d\n", sum);
}
return (res);
}

