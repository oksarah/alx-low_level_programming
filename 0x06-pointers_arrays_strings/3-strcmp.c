#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares pointer to 2 strings
 * @s1:points to the first string
 * @s2: points to the second string
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2);
{
while (*s1 && *s2 &&*s1 == *s2)
{
s1++;
s2++;
}

return (*s1 - *s2);
}
