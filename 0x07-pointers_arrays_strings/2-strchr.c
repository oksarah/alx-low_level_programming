#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @c: character to check for 
 * @s: string to check
 * Return: pointer to spot in s with c or null
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; *(s + i); i++)
{
if (*(s + i) == c)
return (s + i);
}
if (*(s + i) == c)
return (s + i);
return (0);
}
