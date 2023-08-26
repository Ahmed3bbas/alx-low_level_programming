#define ALPHA_DIFF  32
#define FIRST_LOWER 97
#define LAST_LOWER  122

/**
*cap_string - Convert each word's first character into upper case
*@str: Pointer to String
*
*Return: Char* Pointer to the string
*/
char *cap_string(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
switch (str[i])
{
case ' ':
case '\t':
case '\n':
case ',':
case ';':
case '.':
case '!':
case '?':
case '\"':
case '(':
case ')':
case '{':
case '}':
if ((str[i + 1] >= FIRST_LOWER) && (str[i + 1] <= LAST_LOWER))
{
str[i + 1] = str[i + 1] - ALPHA_DIFF;
}
break;
default:
break;
}
i++;
}
return (str);
}
