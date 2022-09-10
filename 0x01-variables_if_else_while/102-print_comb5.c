#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print if the number is positive, zero, or negative
 * Description: using the main function
 * this program prints "programming is positive, zero, or negative"
 * Return: 0
 */
int main(void)
{
int i, p;
for (i = 0; i < 100; i++)
{
for (p = 0; p < 100; p++)
{
if (p > i)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((p / 10) + '0');
putchar((p % 10) + '0');
if (i != 98)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
