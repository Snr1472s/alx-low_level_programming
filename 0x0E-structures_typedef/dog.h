#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct dog with the following element
 *
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 *
 * Desc: Define struct
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _putchar(char c);

#endif
