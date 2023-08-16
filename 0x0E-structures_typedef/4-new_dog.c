#include "dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, len;
	int n;
	dog_t *dogx;

	nlen = len = 0;
	while (name[nlen++])
		;
	while (owner[len++])
		;
	dogx = malloc(sizeof(dog_t));
	if (dogx == NULL)
		return (NULL);

	dogx->name = malloc(nlen * sizeof(dogx->name));
	if (dogx == NULL)
		return (NULL);
	for (n = 0; n < nlen; n++)
		dogx->name[n] = name[n];

	dogx->age = age;

	dogx->owner = malloc(len * sizeof(dogx->owner));
	if (dogx == NULL)
		return (NULL);
	for (n = 0; n < len; n++)
		dogx->owner[n] = owner[n];
	return (dogx);
}
