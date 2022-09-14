#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

/**
 * _putchar - writes the character to c standout
 * @c: The character to print
 * Return: on success 1.
 * On error, -1 is returned, and errno is set appropriatelty
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
