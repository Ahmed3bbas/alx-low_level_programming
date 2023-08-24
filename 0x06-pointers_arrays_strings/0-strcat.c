/**
 * _strcat - check the code
 *@*dest: Pointer to the  First String to be concatenated
 *@*src : Pointer to the Second String to be concatenated
 *
 *Return: Char*
 */
char *_strcat(char *dest, char *src)
{
int src_len = 0;
int dest_len = 0;
int i = 0;
int j = 0;
while(*(src+i) != '\0')
{
i++;
src_len++;
}
while(*(dest+j) != '\0')
{
j++;
dest_len++;
}
for(i = 0; i < src_len; i++)
{
*(dest+dest_len+i) = *(src+i);
}
return dest;
}
