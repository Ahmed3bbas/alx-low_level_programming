#define UPPER_INDEX 32
#define FIRST_LOWER 97
#define LAST_LOWER  122

/**
*cap_string - Convert first character into upper case
*@*str: Pointer to String
*
*Return: Char*
*/
char *cap_string(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{

switch (str[i])
{
case '.':
case ' ':
case '-':
case ',':
case '?':
case '!':
case '"':
case '(':
case ')':
case '{':
case '}':
case ';':
if (str[i + 1] >= FIRST_LOWER && str[i + 1] <= LAST_LOWER)
{
str[i + 1] = (int)str[i + 1] - UPPER_INDEX;
}
break;
default:
break;
}
i++;
}
return (str);
}
