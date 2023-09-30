#include "main.h"

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: the number
 *@v: value
 *Return: the result
*/

int  sqr(int n, int v);


int _sqrt_recursion(int n)
{
return (sqr(n, 1));
}

/**
 * sqr - find square root
 * @n: number
 * @v: the value
 * Return: result
*/

int sqr(int n, int v)
{
if (v * v == n)
return (v);
else if (v * v < n)
return (sqr(n, v + 1));
else
return (-1);
}
