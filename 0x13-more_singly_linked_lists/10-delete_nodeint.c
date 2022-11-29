#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  *delete_nodeint_at_index - Deletes node at index
  *@head: Head node
  *@index: Position to delete node
  *Return: 1 if succeeded or -1 if failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = *head;

	if (*head == NULL)
		return (-1);

	else if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		while (index != 0)
		{
			previous = current;
			current = current->next;
			index--;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
	}
	return (1);
}
