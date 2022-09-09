#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 ** main - print if the number is positive, zero, or negative
 * Description: using the main function
 * This program prints "programming is positive, xero, or negative"
 * Return: 0
 */
int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
if (c != '9')
{
putchar(',');
putchar(' ');
}
}
{
putchar('\n');
}
return (0);
}
