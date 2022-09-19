#include "main.h"
#include <stdio.h>

/**
 * puts_half - printing half of a string
 * @str: input string
 * Return: Always 0.
 */
void puts_half(char *str)
{
int index, half;

index = 0;
while (str[index] != '\0')
index++;
half = index / 2;
if (index % 2 == 1)
half++;
while (half < index)
{
putchar(str[half]);
half++;
}
putchar('\n');
}
