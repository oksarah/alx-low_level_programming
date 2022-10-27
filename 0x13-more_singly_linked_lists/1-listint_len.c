#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * listint_len - Returns the number of elements.
 * @h: Points to the head of the list.
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
