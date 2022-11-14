#include <stdlib.h>
#include "dog.h"
/**
  *new_dog - Function that creates new dog
  *@name: 1st parameter
  *@age: 2nd parameter
  *@owner: 3rd parameter
  *Return: dog_new
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;

	dog_new = malloc(sizeof(dog_t));

	if (dog_new == NULL)
		return (NULL);
	dog_new->name = name;
	dog_new->age = age;
	dog_new->owner = owner;

	return (dog_new);
}
