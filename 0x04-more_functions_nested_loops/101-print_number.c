#include "main.h"

/**
 * print_numbers - print integar
 * @n: the integer to be printed
*/

void print_number(int n)
{
unsigned int num = n;
/*first check if its nagative*/
if (n < 0)
{
_putchar('_');
num = -num;
}
/*print the first few digits*/
if ((num / 10) > 0)
print_number(num / 10);
/*print the last digit*/
_putchar((num % 10) + 48);
}