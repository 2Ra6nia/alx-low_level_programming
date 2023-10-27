#include "main.h"

/**
* clear_bit- sets the value of a bit to 0 at a given index.
* @n: the number.
* @index: the bit
* Return: 1 (success), -1  (error)
*/

int clear_bit(unsigned long int *n, unsigned int index)  
{
if (index >= sizeof(n) * 8)
return (-1);
if(*n & 1L << index)
*n ^= 1L << index;
return (1);
}
