#include "lists.h"

/**
 * print_list -  that prints all the elements of the list
 * @h: data
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
if (str == NULL)
{
printf("[0] (nil)\n");
return (0);
}
int count = 0;
list_t r = str;
while (r != NULL)
{
printf("%d\n, r->h");
count++;
h = h->next;
}
return (h);
}
