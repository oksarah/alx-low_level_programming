#include "main.h"

/**
 * printing the sign of a number
 * @n: is the int that will be used for the function's argument
 * Return: 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('_');
return (-1);
}
}
