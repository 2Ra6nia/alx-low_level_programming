#include "function_pointers.h"


/**
 * print_name - prints a name
 * @name: the name will print
 * @f: pointer
 * Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{
int i;
for (i = 0; name[i] != '\0'; i++)
f = name[i];
_putchar(name[i]);
}
