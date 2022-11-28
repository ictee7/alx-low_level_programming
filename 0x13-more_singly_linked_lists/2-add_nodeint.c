#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
  *add_nodeint - Function to add node at the beginning
  *@head: 1st parameter passed
  *@n: 2nd parameter passed
  *Return: address of new element or NULL if fail
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (0);

	new = malloc(sizeof(listint_t));

	if (!new)
		return (0);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
