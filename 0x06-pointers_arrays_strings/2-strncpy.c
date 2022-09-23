#include "main.h"
#include <stdio.h>

/**
 * _strncpy - c function that copies a string
 * if the length of the source string is less than maximum byte no
 * reminder of the desination string is filled with null bytes
 * @dest: stores the string copy
 * @src: sources the string to the dest
 * @n: max number of byte copied
 * Return: returns
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
