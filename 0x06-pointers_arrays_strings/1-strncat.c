#include "main.h"

/**
 * *_strncat - concatenates two strings.
 * @dest: pointer
 * @src: pointer
 * @n: number of bytes
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
int c;
int i;
c = 0;
while (dest[c])
c++;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[c + i] = src[i];
dest[c + i] = '\0';
return (dest);
}
