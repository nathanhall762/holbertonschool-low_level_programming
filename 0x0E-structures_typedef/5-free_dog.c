#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_dog - frees dogs
* @d: address of struct
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).owner);
		free((*d).name);
		free((*d);
	}
}
