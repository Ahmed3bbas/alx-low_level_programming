/**
*_strcmp - Compare two strings
*@s1: First String
*@s2 : Second Striing
*
*Return: int 0(s1 = s2), 1(s1 > s2), -1(s1 <s2)
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;
int cmp = -1;
int s1_len = 0;
while (*(s1 + i) != '\0')
{
i++;
s1_len++;
}
for (i = 0; i < s1_len; i++)
{
cmp = (int)(s1[i] - s2[i]);
if (cmp == 0)
{
continue;
}
else
{
break;
}
}
return (cmp);
}
