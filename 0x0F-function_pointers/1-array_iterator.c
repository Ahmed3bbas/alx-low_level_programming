#include <stddef.h>
/**
 *array_iterator - Function that Executes Functions.
 *@array: Address of the Array.
 *@size: Size of the Array.
 *@action: Function to be executed.
 *Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t counter = 0;
while (counter < size)
{
if (action != NULL)
{
action(array[counter]);
}
counter++;
}
}

