#include "lists.h"
/**
 * add_dnodeint_end - adds a new node to the end of a doubly linked list
 * @head: the head of a linked list
 * @n: the data of the new node
 * Return: the address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = NULL, *h;

h = *head;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}

new->n = n;
new->next = NULL;
new->prev = NULL;

if (*head == NULL)
{
*head = new;
return (*head);
}
while (h->next != NULL)
{
h = h->next;
}
new->prev = h;
h->next = new;

return (new);
}
