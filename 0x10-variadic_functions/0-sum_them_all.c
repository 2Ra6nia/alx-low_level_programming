#include "variadic_functions"

/**
 * sum_them_all - sum of all its parameters
 * @n: the fexid argument
 * Return: the reslut
*/

int sum_them_all(const unsigned int n, ...)
{
int i, sum = 0;
va_list args;
va_start(args, n);
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
sum += av_arg(args, int);
}
va_end(args);
return (sum);
}
