#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* new_dog - creates a new dog
* @name: dog name
* @age: dog age
* @owner: dog owner
*
* Return: Null if function fails, else pointer to dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name != NULL && age >= 0 && owner != NULL)
		return (newdog);
	return (newdog);
}
