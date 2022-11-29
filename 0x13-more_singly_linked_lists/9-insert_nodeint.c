#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  *insert_nodeint_at_index - Insert a node at given position
  *@head: Head node
  *@idx: Position to insert node
  *@n: Data to insert
  *Return: address of the new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *head_ptr = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (head == NULL || new_node == NULL)
		return (0);

	new_node->n = n;
	new_node->next = NULL;

	while (idx != 1)
	{
		head_ptr = head_ptr->next;
		idx--;
	}
	new_node->next = head_ptr->next;
	head_ptr->next = new_node;
	return (new_node);
}
