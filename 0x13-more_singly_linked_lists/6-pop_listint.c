#include <stdlib.h>
#include "lists.h"

/**
  *pop_listint - Function to delete the head node
  *@head: head node
  *Return: The head's node
  */

int pop_listint(listint_t **head)
{
	listint_t *del;
	int n = 0;

	if (head == NULL)
		return (0);
	del = *head;
	*head = (*head)->next;
	free(del);
	del = NULL;
	return (n);
}
