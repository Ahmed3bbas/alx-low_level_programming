#include <stdio.h>
/**
 *_strncat - Concatenate n characters of src with dest
 *@dest: Pointer to dest
 *@src: Pointer to src
 *@n: Number of Charactrs to be Concatenated
 *
 *Return: Char*
 */
char *_strncat(char *dest, char *src, int n)
{
int src_len = 0;
int dest_len = 0;
int i = 0;
int j = 0;
while (*(src + i) != '\0')
{
i++;
src_len++;
}
while (*(dest + j) != '\0')
{
j++;
dest_len++;
}
if (src_len >= n)
{
for (i = 0; i < n; i++)
{
*(dest + dest_len + i) = *(src + i);
}
}
else
{
for (i = 0; i < src_len; i++)
{
*(dest + dest_len + i) = *(src + i);
}
}
return (dest);
}
