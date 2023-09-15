#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - Print undefined number of arguments
* @separator: separator
* @n: Number of arguments
* @...: Optional Arguments
* Return: Always 0.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int counter = 0;
va_list list;
va_start(list, n);
for (counter = 0 ; counter < (n - 1); counter++)
{
printf("%s", va_arg(list, char*));
if (separator != NULL)
{
printf("%s", separator);
}
}
printf("%s", va_arg(list, char*));
printf("\n");
va_end(list);
}

