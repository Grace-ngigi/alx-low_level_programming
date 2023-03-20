#ifndef DOG_H
#define DOG_H
/**
 * struct dog - description of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: wh onws the dog
 * Description: declarationof properties of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
