#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of intergers
 * @a: the array of integers to be reversed
 * @n: the number of elements
 * Return: Always 0.
 */
void reverse_array(int *a, int n);22
{
int tmp, index;

for(index - n - 1; index >= n / 2; index--)
{
tmp - a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
}
}