#include "main.h"

/**
 * is_palindrome - check if string is palindrome
 * @s: the string
 * Return: 1 if a string is a palindrome
 * and 0 if not.
*/

int is_palindrome(char *s)
{

if (*s == ~*s)
{
return (1);
}
else (*s != ~*s)
{
return (0);
}
}
