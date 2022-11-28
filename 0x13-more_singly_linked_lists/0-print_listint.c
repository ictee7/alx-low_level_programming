#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  *print_listint - Function to print elements in node
  *@h: next node
  *Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

