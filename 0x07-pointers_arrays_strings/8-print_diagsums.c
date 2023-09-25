#include "main.h"
#include <stdio.h>


/**
* print_diagsums - prints the sum of the two diagonals
* of a square matrix of integers.
* @a: 2d array of integers
* @size: size of array
* Return: nothing
*/

void print_diagsums(int *a, int size)
{
int n;
int i;
int q1 = 0;
int q2 = 0;
for (i = 0; i <= (size * size); i = i+ size + 1)
q1 = q1 + a[i];
for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
q2 = q2 + a[n];
printf("%d, ", q1);
printf("%d\n", q2);
}
