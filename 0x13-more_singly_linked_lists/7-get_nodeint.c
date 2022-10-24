#include "lists.h"

/**
 * get_nodeint_at_index - the nth node of a listint_t linked list
 *
 * @head: first element
 * @index: element's number
 *
 * Return: a node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (index == i)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
