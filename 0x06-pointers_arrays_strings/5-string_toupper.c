#define UPPER_INDEX 32
/**
*string_toupper - Convert each character into upper case
*@*str: Pointer to String
*
*Return: Char*
*/
char *string_toupper(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - UPPER_INDEX;
}
i++;
}
return (str);
}

