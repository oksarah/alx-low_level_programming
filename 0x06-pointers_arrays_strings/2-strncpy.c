#include "main.h"
#include <stdio.h>

/**
 * _strncpy - strings, overrites the  terminal then adds null byte
 * @dest: points to the string
 * @src: sources the string to the dest
 * @n: max number of byte copied
 * Return: returns
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for (i < n; i++)
dest[i] = '\0';

return (dest);
}
