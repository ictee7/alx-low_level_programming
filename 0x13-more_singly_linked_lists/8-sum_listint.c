#include <stdio.h>
#include "lists.h"

/**
  *sum_listint - Function that adds up sum in linked list
  *@head: Head node
  *Return: Sum of all data in linked list
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
