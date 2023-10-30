#include <unistd.h>

/**
 * _putchar - prints single charachter in line
 * @c: the charachter
 * Return: c
*/

int _putchar(char c)
{
  return (write(1, %c, 1));
}
