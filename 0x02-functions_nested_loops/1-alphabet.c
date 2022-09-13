#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/**
 * main - print in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
