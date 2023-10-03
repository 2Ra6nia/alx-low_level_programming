#include <stdio.h>

/**
 * main - entry point
 * Description: prints the argument its recive
 * @argc: argument counter
 * @argv: an array
 * Return: 0 (success)
*/

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
