#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of array
 * @c: the chars of array
 * Return: NULL if size = 0,
 * a pointer to the array,or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
char *array = malloc(size);
if (size == 0 || array == 0)
{
return (0);
}
while (size--)
array[size] = c;
return (array);
}
