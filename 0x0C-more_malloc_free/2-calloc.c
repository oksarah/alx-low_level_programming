include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an arrray
 * @nmemb: no of ellements
 * @size: size of elements of array
 * Return: always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;
unsigned int i;

if (nmemb == o || size == 0)
{
return (NULL);
}
p = malloc(nmemb * size);
if (p == NULL)
{
return (NULL)
}

for (i = 0; i < (nmemb * size); i++)
{
*((char * (p) + i) = 0;
}

return (p);
}
