#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int num;
va_list args;
va_start(args, n);
if (separator == NULL)
return;
for (i = 0; i < n; i++)
{
num += va_arg(args, int);
printf("%d\n", n);
printf("%s", separator);
}
va_end(args);
printf("\n");
}
