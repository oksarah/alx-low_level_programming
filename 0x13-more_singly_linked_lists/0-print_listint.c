#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_listint - Prints all the elements of the list.
 * @h: Points to the head of the list.
 * Return: The number of nodes in list.
 */
size_t print_listint(const listint_t *h)
{
		size_t nodes = 0;

			while (h)
					{
								nodes++;
										printf("%d\n", h->n);
												h = h->next;
													}

				return (nodes);
}
