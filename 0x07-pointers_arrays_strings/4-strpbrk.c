#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @accept: string to check against 
 * @s: string to check 
 * Return: pointer to byte in s that matches or null if no match
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (accept[j]) 
return (s + i);
}
return (0);
}

