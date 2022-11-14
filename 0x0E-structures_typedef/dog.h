#ifndef DOG_H
#define DOG_H
/**
  *struct dog - Entry point
  *@age: 1st member
  *@name: 2nd member
  *@owner: 3rd member
  */

typedef struct dog
{
	float age;
	char *name;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
