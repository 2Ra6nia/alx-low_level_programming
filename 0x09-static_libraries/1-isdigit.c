#include "main.h"

/**
* _isdigit - check for digit between 0 and 9
*
* @c: input number
*
* Return: 1 if its digit, 0 if not
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
