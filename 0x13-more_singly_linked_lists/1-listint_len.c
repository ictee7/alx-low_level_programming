#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  *listint_len - Function to return number of elements
  *@h: pointer to next node
  *Return: number of nodes
  */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

