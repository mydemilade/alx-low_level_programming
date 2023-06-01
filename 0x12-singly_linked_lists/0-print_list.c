#include <stdlib.h>
#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0
		while (h != NULL)
	{

		if (h->str == NULL)
		printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		counter++;
	}
	return (counter)
}
