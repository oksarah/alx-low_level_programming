#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercases letters of a string to uppercase
 * @str:  parameter
 * Return: Always 0.
 */
char *string_toupper(char *)
{
int index = 0;

while (str[index++])
{
if (str[index] >= 'a' && src[index] <= 'z')
str[index] -= 32;
}

return (str);
}
