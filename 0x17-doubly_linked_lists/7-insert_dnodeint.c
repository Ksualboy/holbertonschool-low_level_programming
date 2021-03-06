#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node in the index position
 * @h: List to iterate
 * @idx: The position to add new node
 * @n: value of new node
 * ----------------------------------------
 * Return: The address of the desired node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *copy, *temp, *new = malloc(sizeof(dlistint_t));
	unsigned int i;

	if (!h || !new)
		return (NULL);

	if (idx == 0)
	{
		free(new);
		return (add_dnodeint(h, n));
	}

	copy = *h;

	for (i = 0; i < idx - 1; i++)
	{
		if (copy)
			copy = copy->next;
		else
		{
			free(new);
			return (NULL);
		}
	}

	if (!copy->next)
	{
		free(new);
		return (add_dnodeint_end(h, n));
	}

	temp = copy->next;

	new->n = n;
	new->prev = copy;
	copy->next = new;
	new->next = temp;
	temp->prev = new;

	return (new);
}
