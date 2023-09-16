#include "main.h"

/**
* print_square - print a square line
* @size: is the size of the square
* return: always 0 (success)
*/

void print_square(int size)
{
int rows;
int column;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (rows = 1; rows <= size; rows++)
{
for (column = 1; cloumn <= size; column++)
_putchar('#');
_putchar('\n');
}
}
}
