#include "main.h"
#include <fcntl.h>

/**
 * create_file - creates file
 * @filename: the file name
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
int fd = open("filename", O_RDWR, O_TRUNC | O_CREAT, 0600);
if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
{
return (fd);
}
return (1);
}
