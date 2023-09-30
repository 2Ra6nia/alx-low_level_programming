#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: the pointer thar are store string
 * Return: nothing
*/


void _print_rev_recursion(char *s)
{
char c;
if (*s == '\0')
{
return;
}
c = *s;
_print_rev_recursion(s + 1);
_putchar(c);
}
