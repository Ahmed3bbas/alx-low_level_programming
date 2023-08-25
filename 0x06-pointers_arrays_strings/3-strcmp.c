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
int j = 0;
int cmp = -1;
int s1_sum = 0;
int s2_sum = 0;
while (*(s1 + i) != '\0')
{
s1_sum += s1[i] - 0x26;
i++;
}
while (*(s2 + j) != '\0')
{
s2_sum += s2[j] - 0x26;
j++;
}
cmp = (s1_sum - s2_sum);
return (cmp);
}
