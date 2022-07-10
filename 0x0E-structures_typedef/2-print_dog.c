#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog.
 * @d: struct dog.
 *
 * Return: no return.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		puts("Name: (nil)");
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else 
		puts("Owner: (nil)");
}
