#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string into an integer
 * @s: points to a character
 * Return: Always 0.
 */
int _atoi(char *s)
{
int sign;
int num;
char *temp;

temp = s;
num = 0;
sign = 1;
while (*temp != '\0' && (*temp < '0' || *temp > '9'))
{
if (*temp == '-')
sign *= -1;
temp++;
{
if (*temp != '\0')

num = num * 10 + (*temp - '0');
temp++;

while (*temp >= '0' && *temp <= '9');
return (num * sign);
}
}
}