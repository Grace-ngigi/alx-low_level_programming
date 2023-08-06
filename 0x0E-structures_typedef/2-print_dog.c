#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: the struct to be printed
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	(d->age = 0.0) ? printf("Age: %f\n", d->age) : printf("Age: (nil)\n");
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
