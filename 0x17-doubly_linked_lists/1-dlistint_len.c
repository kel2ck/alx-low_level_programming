#include "lists.h"

/**
 * dlistint_len - returns the number of element in a doubly linked list
 *
 * @head: the head of the doubly linked list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *head)
{
	size_t count = 0;

	while (head)
	{
		head = head->next;
		count++;
	}
	return (count);
}
