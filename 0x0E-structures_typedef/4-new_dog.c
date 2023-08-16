#include "dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * _strlen - length of a string
 * @s: pointer
 *
 * Return: 0
 *
 */
int _strlen(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		while (*(s + len) != '\0')
			len++;
	}
	return (len);
}
/**
 * _strcpy - copies the string
 * @dest: pointer destination
 * @src: pointer source
 *
 * Return: pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen;
	dog_t *dogx;

	dogx = malloc(sizeof(dog_t));
	if (dogx == NULL)
		return (NULL);
	nlen = _strlen(name);
	dogx->name = malloc(sizeof(char) * (nlen + 1));
	if (dogx->name == NULL)
	{
		free(dogx);
		return (NULL);
	}
	dogx->name = _strcpy(dogx->name, name);
	dogx->age = age;
	olen = _strlen(owner);
	dogx->owner = malloc(sizeof(char) * (olen + 1));
	if (dogx->owner == NULL)
	{
		free(dogx->name);
		free(dogx);
		return (NULL);
	}
	dogx->owner = _strcpy(dogx->owner, owner);
	return (dogx);
}
