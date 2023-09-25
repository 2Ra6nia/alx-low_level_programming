#include <unistd.h>


/**
 * _putchar - prints charachter in newline
 * @c: the charachter
 * Return: the chrarchter
*/

char _putchar(char c)
{
return (write(1, % c, 1));
}
