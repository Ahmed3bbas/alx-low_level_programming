#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *main - check the code
 *@argc: Counter of Arguments
 *@argv: Argument Array
 *Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}

