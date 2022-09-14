#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - computing the avbsolute value of an integer
 * @c: is the int that will be used for the function's arguement
 * Return: 0
 */
int _abs(int c)
{
if (c > 0 || c == 0)
{
return (c);
}
else
return (c * -1);
}
