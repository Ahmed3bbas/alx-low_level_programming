#include <stdarg.h>
#include <stdio.h>
/**
* sum_them_all - Sum undefined number of arguments
* @separator: separator
* @n: Number of arguments
* @...: Optional Arguments
* Return: Always 0.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int counter = 0;
va_list list;
va_start(list, n);
for (counter = 0 ; counter < (n - 1); counter++)
{
printf("%d", va_arg(list, int));
printf("%s", separator);
}
printf("%d", va_arg(list, int));
printf("\n");
va_end(list);
}

