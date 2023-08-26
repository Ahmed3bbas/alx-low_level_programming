#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int i = 0;
char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
char *ptr;
ptr = cap_string(str);
while(str[i] != '\0')
{
putchar(str[i]);
i++;
}
i = 0;
while(ptr[i] != '\0')
{
putchar(ptr[i]);
i++;
}

return (0);
}
