#include "main.h"

/**
 * is_palindrome - check if string is palindrome
 * @s: the string
 * Return: 1 if a string is a palindrome
 * and 0 if not.
*/

int is_palindrome(char *s)
{
char c;
c = *s;
if (*s != c)
{
return (0);
}
return (1);
}
