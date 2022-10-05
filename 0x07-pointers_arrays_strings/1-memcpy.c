#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies the memory area
 * @dest: area to be copied into
 * @src:  area to be copied from
 * @n: number of bytes to be copied
 * Return: pointer to the copied memory block
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

for (; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
