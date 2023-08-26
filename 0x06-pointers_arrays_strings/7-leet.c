#include <stdio.h>
#define NUMERIC_INDEX 48
#define ALPHA_DIFF    32

/**
*leet - Check code
*@str: Pointer to String
*
*Return: Char*
*/
char *leet(char *str)
{
int i = 0;
int j = 0;
char leet_decoder[8] = {'O', 'L', '\t', 'E', 'A', '\t', '\t', 'T'    };
while (*(str + i) != '\0')
{
for (j = 0; j < 8 ; j++)
{
if ((leet_decoder[j] == str[i] || str[i] == leet_decoder[j] + ALPHA_DIFF))
{
str[i] = j + NUMERIC_INDEX;
}
}
i++;
}
return (str);
}
