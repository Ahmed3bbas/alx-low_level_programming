/**
*_strcmp - Compare two strings
*@s1: First String
*@s2: Second String
*
*Return: int Comapre Result
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;
int cmp = -1;
int s1_len = 0;
int s2_len = 0;
while (*(s1 + i) != '\0')
{
i++;
s1_len++;
}
while (*(s2 + j) != '\0')
{
j++;
s2_len++;
}
if (s1_len < s2_len)
{
cmp = -15;
}
else if (s1_len > s2_len)
{
cmp = 15;
}
else
{
for (i = 0, j = 0; i < s2_len; i++)
{
if (s1[i] == s2[j])
{
j++;
if (j == s2_len)
{
cmp = 0;
}
}
}
}
return (cmp);
}
