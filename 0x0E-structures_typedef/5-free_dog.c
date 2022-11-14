#include <stdlib.h>
#include "dog.h"
/**
  *free_dog - Function that frees dogs
  *@d: parameter passed
  *Return: void
  */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
