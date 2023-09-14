#include "main.h"

/**
* print_diagonal - print a digonnal line
* @n: is a number of times the \ charchter
* should printed
*/

void print_diagonal(int n)
{
int postn;
int space;
if (n <= 0)
_putchar('\n');
else
{
for (postn = 1; postn <= n; postn++)
{
for (space = 1; space <= postn; space++)
_putchar(' ');
_putchar('\');
_putchar('\n');
}
}
}
