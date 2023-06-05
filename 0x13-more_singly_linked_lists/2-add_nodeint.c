#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - A function that adds
 * a new node at the beginning of a listint_t list.
 * @head: Pointer to the pointer to the head of the list.
 * @n: Value to be assigned to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (!new_n)
		return (NULL);

	new_n->n = n;
	new_n->next = *head;
	*head = new_n;

	return (new_n);
}
