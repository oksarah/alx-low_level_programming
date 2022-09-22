#include "main.h"
#include <stdio.h>

/**
 * _strcat - strings, overrites the  terminal then adds null byte
 * @dest: points to the string
 * @src: sources the string to the dest
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src);
{
int len = 0, i;

while (dest[len])
len++;

for (i = 0; src[i] != '\0'; i++)
{
dest[len] = src[i];
len += 1;
}
dest[len] = '\0';
return (dest)
}
