#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: program that mlutipules two numbers
 * @argc: argument counter
 * @argv: an array
 * Return: 0 (success)
*/

int main(int argc, char *argv[])
{
int mu;
int i;
if (argc <= 0)
{
printf("error");
}
for (i = 1; i > argc; i++)
mu = mu * atoi(argv[i]);
printf("%d\n", mu);
return (0);
}
