#include "main.h"

/**
* _islower - function to check for lowercase character
* @c: is the int that will be used for the argument
* Return: 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
_putchar('\n');
else
return (0);
}
