#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*reverse_array - Revers Array
*@a: The array
*@n: The number of elements in the array
*
*Return: nothing.
*/
void reverse_array(int *a, int n)
{
int *ptr_m = (int *)malloc(n * sizeof(int));
int i = 0;
int j = 0;
for (i = 0, j = n - 1; i < n; i++, j--)
{
ptr_m[i] = a[j];
}
memcpy(a, ptr_m, n * 4);
}
