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
int i, p, m;
for (i = 0; i < 9; i++)
{
for (p = 1; p <= 9; p++)
{
for (m = 2; m <= 9; m++)
{
if (m > p && p >i)
{
putchar(i + '0');
putchar(p + '0');
putchar(m + '0');
if (i != 7)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
