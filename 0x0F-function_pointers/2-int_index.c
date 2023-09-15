#include <stdlib.h>
/**
 *int_index - Function that return Compare Index
 *@array: Address of the Array.
 *@size: Size of the Array.
 *@cmp: Pointer to Function that compares.
 *Return: Always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int counter = 0;
int index = 0;
int cmp_res = 0;
if (size <= 0)
{
index = -1;
}
while (counter < size)
{
cmp_res = cmp(array[counter]);
if (cmp_res > 0)
{
index = counter;
break;
}
else if (cmp_res == 0)
{
index = -1;
}
counter++;
}
return (index);
}

