#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - A function returns the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	 size_t counter = 0;

	while (h)
	{
	counter++;
	h = h->next;
	}

	return (counter);
}
