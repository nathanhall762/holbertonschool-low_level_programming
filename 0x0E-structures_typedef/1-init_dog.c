#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* init_dog - initializes a variable of type struct dog
* @d: address of variable of type struct dog
* @name: dog name
* @age: dog age
* @owner: dog owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
