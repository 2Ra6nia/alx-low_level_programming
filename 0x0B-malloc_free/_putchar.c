#include <unistd.h>

/**
 * _putchar - prints with newline
 * @c: the charachter
 * return: the charchter
*/

int _putchar(char c)
{
return (write(1, % c, 1));
}
