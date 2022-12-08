#include "lists.h"
#include <stdio.h>

#include "lists.h"

/**
 * print_dlistint - prints all the element in a doubly linked list
 *
 * @head: the head of the doubly linked list
 * Return: length of list
 */

size_t print_dlistint(const dlistint_t *head)
{
	size_t count = 0;

	while (head)
	{
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}
	return (count);
}
