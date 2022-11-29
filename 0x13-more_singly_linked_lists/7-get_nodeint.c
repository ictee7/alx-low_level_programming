#include <stdio.h>
#include "lists.h"

/**
  *get_nodeint_at_index - Function to get nth node
  *@head: Head node
  *@index: position to get
  *Return: nth node of a linked list
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (0);
}
