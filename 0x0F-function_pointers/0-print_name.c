#include <stddef.h>
/**
 * print_name - Function that Prints Name
 * @name: name of the person
 * @f: Pointer to Function
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
(*f)(&name[0]);
}
}

