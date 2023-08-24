/**
 *_strcat - Concatenate src with dest
 *@dest: Pointer to the dest
 *@src : Pointer to src
 *
 *Return: Char*
 */
char *_strcat(char *dest, char *src)
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
for (i = 0; i < src_len; i++)
{
*(dest + dest_len + i) = *(src + i);
}
return (dest);
}
