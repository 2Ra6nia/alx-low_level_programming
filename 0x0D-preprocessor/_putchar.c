#include <unistd.h>

/**
 * _putchar - prints charchaters with new line
 * @c: the charchter
 * Return: c
*/

int _putchar(char c)
{
return (write(1, % c, 1));
}
