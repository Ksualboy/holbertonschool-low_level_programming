#include "lists.h"

/**
* free_listint - frees a list
* @head: list to free
*
*/

void free_listint(listint_t *head)
{
	listint_t *buscador = head;
	listint_t *temp;

	if (!head)
		return;

	while (buscador)
	{
		temp = buscador;
		buscador = buscador->next;
		free(temp);
	}

}
