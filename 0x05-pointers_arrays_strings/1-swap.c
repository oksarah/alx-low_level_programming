#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps two integers values
 * @a: 1st integer
 * @b: 2nd integer
 * Return: Always 0.
 */
void reset_to_98(int *a, int *b)
{
int tmp = *a;

*a = *b;
*b = tmp;
}

