#include  "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: poinetr that store string
 * Return: nothing
*/

void _puts_recursion(char *s)
{
char c;
if (*s == '\0')
{
return;
}
c = *s;
_putchar(c);
_puts_recursion(s++);
}
