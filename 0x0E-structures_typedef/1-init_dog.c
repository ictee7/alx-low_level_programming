#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
  *init_dog - Entry point
  *@d: 1st parameter
  *@name: 2nd parameter
  *@age: 3rd parameter
  *@owner: 4th parameter
  *Return: void
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	d->age = age;
	d->owner = owner;

}
