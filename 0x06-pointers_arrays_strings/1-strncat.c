#include "main.h"
#include <stdio.h>

/**
 * _strncat - uses two strings  from src
 * @dest: the string to be appended upon
 * @src: to be the appended dest
 * @n: number of bytes from src to be appended to dest
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;

for (inde = 0; src[index]; index++)
dest[dest_len++] = src[index];

return (dest);
}
