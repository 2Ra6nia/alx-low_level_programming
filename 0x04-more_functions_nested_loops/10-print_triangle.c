#include "main.h"

/**
 * print_triangle - print a triangle with # charchter
 * @size: size of traingle
 * return: always 0 (success)
*/

void print_triangle(int size)
{
int hght;
int base;
if (size <= 0)
_putchar ('\n');
else
{
for (hght = 1; hght <= size; hght++)
{
for (base = 1; base <= size; base++)
{
if ((hght + base) <= size)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
}
