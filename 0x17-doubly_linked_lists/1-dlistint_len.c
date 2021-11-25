#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_dlistint - function that prints all elements of a dlistint_t list
 * @h: header pointer
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h);
{
	size_t cont = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cont++;
	}
	return (cont);
}
