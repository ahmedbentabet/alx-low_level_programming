#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure for representing a dog
 * @name: Pointer to the name of the dog (string)
 * @age: Age of the dog (floating-point number)
 * @owner: Pointer to the owner's name (string)
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
