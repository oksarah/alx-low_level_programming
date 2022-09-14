#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - printing all natural numbers from n to 98 
 * @n: the number starts counting
 * Return: 0
 */
int main()
{
print_to_98(98);
print_to_98(111);
print_to_98(81);
print_to_98(0);
print_to_98(-98);
print_to_98(-111);
return (0);
}
void print_to_98(int n)
{
if (n >= 98)
{
    /* code */
    while (n > 98)
    {
        printf("%d, ", n--);
        printf("%d\n", n);
    }
    
}
else
{
    while (n < 98)
    {
        printf("%d, ", n++);
        printf("%d\n", n);
    }
    
}

}