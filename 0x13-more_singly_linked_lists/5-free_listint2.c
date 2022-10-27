#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Points to the address of the head of the list.
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
		listint_t *tmp;

			if (head == NULL)
						return;

				while (*head)
						{
									tmp = (*head)->next;
											free(*head);
													*head = tmp;
														}

					head = NULL;
}
