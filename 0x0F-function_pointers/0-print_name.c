/**
 * print_name - Function that Prints Name
 * @name: name of the person
 * @f: Pointer to Function
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
(*f)(&name[0]);
}

