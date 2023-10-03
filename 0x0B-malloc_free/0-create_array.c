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
unsigned int i;
if (size == 0)
{
return (NULL);
}
if (array  == NULL)
{
return (NULL);
}
while (size--)
{
array[size] = c;
}
free(array);
return (array);
}
