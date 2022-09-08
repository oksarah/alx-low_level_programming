#include <stdio.h>

/**
 * main - prints size of various types
 * Description: prints size of various types on the computer when compiled
 * Return: 0
 */
int main(void)
{
int i;
char c;
float f;
long li;
long long lli;

printf("Size of a char: %ld bytes(s)\n", sizeof(c));
printf("Size of an int: %ld bytes(s)\n", sizeof(i));
printf("Size of a long int: %ld bytes(s)\n", sizeof(li));
printf("Size of a long long int: %ld bytes(s)\n", sizeof(lli));
printf("Size of a float: %ld bytes(s)\n", sizeof(f));
}
