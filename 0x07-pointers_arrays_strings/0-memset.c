#include "main.h"
#include <stdio.h>

/**
 * _memset - fills a memory block with a constant byte
 * @s: memory block's address
 * @n: char in use
 * Return: pointer to the memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
while (n)
{
s[n - 1] = b;
n--;
}
return (s);
}

