#include "main.h"

/**
* *_strpbrk - searches a string of any of a set of bytes
* @s: string
* @accept: string to match
* Return: zero (success)
*/

char *_strpbrk(char *s, char *accept)
{
int i;
int j;
char *p;
i = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (accept[j] == s[i])
{
p = &s[i];
return (p);
}
j++;
}
i++;
}
return (0);
}
