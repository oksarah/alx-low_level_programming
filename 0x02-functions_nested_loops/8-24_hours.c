#include "main.h"

/**
 * jack_buer - printing every minute of the day
 * min loop counts minutes, while hr loop counts hours
 * Return: 0
 */
void jack_bauer(void)
{
int hours = 0;
int minutes  = 0;
int hours_remainder;
int minutes_remainder;
while ( (hours <= 23))
{
while ( minutes <= 59)
{
hours_remainder = hours % 10;
_putchar(hours / 10 + '0');
_putchar(hours_remainder + '0');
_putchar(':');
_putchar(minutes / 10 + '0');
_putchar;
minutes++;
_putchar('\n');
}
hours++;
minutes = 0;
}
}
