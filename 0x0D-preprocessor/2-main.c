#include "main.h"
/**
 * main - entry point
 * Description: prints the file name
 * Return: the file name
*/
int main(void)
{
const char *name = __FILE__;
int i;
for (i = 0; name[i] != '\0'; i++)
_putchar(name[i]);
_putchar('\n');
return (0);
}
