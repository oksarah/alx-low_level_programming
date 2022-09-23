#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array
 * @a: array 
 * @n: the number of elements
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int tmp, index;

for(index = n - 1; index > n / 2; index--)
{
tmp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
}
}
