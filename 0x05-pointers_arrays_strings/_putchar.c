#include <unistd.h>

/**
 * _putchar - print charchter in one line
 * @c: the characher that will print
 * Return: on success 1.
 * on error -1 is returned and error is set appropriately.
*/
int _putchar(char c)
{
return (write(1, % c, 1));
}
