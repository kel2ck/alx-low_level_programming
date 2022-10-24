#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * createNode - create a new node
 * @num: name
 * Return: new element
 */
listint_t *createNode(const int num)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = num;
	new->next = NULL;

	return (new);
}

/**
 * getLastNode - get last node
 * @HeadNode: first node
 * Return: last element
 */
listint_t *getLastNode(listint_t *HeadNode)
{
	if (!HeadNode)
		return (NULL);
	if (HeadNode->next == NULL)
		return (HeadNode);
	else
		return (getLastNode(HeadNode->next));
}

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: first element
 * @n: number
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	if (head == NULL)
		return (NULL);

	new = createNode(n);
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = getLastNode(*head);
		if (last == NULL)
		{
			printf("failed\n");
			return (NULL);
		}
		last->next = new;
	}

	return (new);
}
