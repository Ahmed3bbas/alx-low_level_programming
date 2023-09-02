/**
*_strncpy - Copy n Characters from src to des
*@dest: Pointer to dest
*@src: Pointer to src
*@n: Number of copied characters
*
*Return: Char*
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
for (i = 0; ((i < n) && (src[i] != '\0')); i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
