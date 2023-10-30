#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: a pointer variable
 * @letters: the number of letters should read and prints.
 * Return: 0 (success)
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *fp;
fp = fopen("filename", "r");
if (fp == NULL)
{
return (0);
}
else
{
while (fp)
_putchar(letters);
letters++;
}
if (filename == NULL)
{
return (0);
}
if (letters == 0)
{
return (0);
}
fclose(fp);
return (letters);
}
