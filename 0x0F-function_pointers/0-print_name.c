#include "function_pointers.h"


/**
 * print_name - prints a name
 * @name: the name will print
 * @f: pointer
 * Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
