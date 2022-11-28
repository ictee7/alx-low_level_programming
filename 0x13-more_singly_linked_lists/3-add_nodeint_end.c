#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *add_nodeint_end - Function to add node at the end
  *@head: 1st parameter passed
  *@n: 2nd parameter passed
  *Return: address of new element or NULL if fail
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *head_ptr;
	listint_t *last_node;

	if (!head)
		return (0);
	last_node = malloc(sizeof(listint_t));
	if (!last_node)
		return (0);
	last_node->n = n;
	last_node->next = 0;

	head_ptr = *head;
	if (*head == NULL)
	{
		*head = last_node;
		return (last_node);
	}

	while (head_ptr->next != NULL)
		head_ptr = head_ptr->next;
	head_ptr->next = last_node;
	return (last_node);
}
