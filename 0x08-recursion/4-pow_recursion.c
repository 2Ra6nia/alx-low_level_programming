#include "main.h"

/**
 * _pow_recursion - returns the value
 * thar are raised to the power
 * @x: the base
 * @y: the power
 * Return: the result
*/

int _pow_recursion(int x, int y)
{
int p;
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else if (y == 1)
{
return (y);
}
p = x * _pow_recursion(x, y);
return (p);
}
