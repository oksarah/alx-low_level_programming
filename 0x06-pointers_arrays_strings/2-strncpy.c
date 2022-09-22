#include "main.h"
#include <stdio.h>

/**
 * _strncpy - strings, overrites the  terminal then adds null byte
 * @dest: points to the string
 * @src: sources the string to the dest
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n);
{
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;

for (inde = 0; src[index]; index++)
dest[dest_len++] = src[index];

return (dest);
}
