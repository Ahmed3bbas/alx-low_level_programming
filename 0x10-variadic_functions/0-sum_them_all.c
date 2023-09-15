#include <stdarg.h>
/**
* sum_them_all - Sum undefined number of arguments
* @n: Number of arguments
* @...: Optional Arguments
* Return: Always 0.
*/
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int counter = 0;
va_list list;
va_start(list, n);
if (n == 0)
{
return (0);
}
else
{
for (counter = 0 ; counter < n; counter++)
{
sum += va_arg(list, int);
}
}
va_end(list);
return (sum);
}

