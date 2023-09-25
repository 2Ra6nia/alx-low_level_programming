#include "main.h"

/**
 * _put - prints a string followed by a newline to stdout
 * @str: string parameter yo print
 * Return: Nothing
*/

void _put(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
str++;
}
_putchar('\n');
}
