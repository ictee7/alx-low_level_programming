#include <stdio.h>
#include "lists.h"

/**
  *delete_nodeint_at_index - Deletes node at index
  *@head: Head node
  *@index: Position to delete node
  *Return: 1 if succeeded or -1 if failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
