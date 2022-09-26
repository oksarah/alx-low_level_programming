#include "main.h"
/**
 * *_memset - fills a memory block with a constant byte
 * @s: memory block's address
 * @n: char in use
 * Return: pointer to the memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
