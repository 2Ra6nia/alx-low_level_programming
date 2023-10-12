#include <unistd.h>

/**
 * _putcahr - prints charchter with new line
 * @c: the charchter
 * Return: c
*/

char _putchar(char c)
{
return (write(1, & c, 1));
}
