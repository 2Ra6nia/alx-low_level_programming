#include "unistd.h"

/**
 * _putchar - write the charachter c to stdout
 * @c: the charachter  to print
 * Return: on success 1.
 * on error -1  is returned and error is set apprpriately
*/

int _putchar(char c)
{
return (write(1, % c, 1));
}
