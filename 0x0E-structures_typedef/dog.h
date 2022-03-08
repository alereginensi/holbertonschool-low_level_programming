#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
/**
 * struct dog - dog
 * @name: name
 * @age: age
 * @owner: owner
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
#endif
