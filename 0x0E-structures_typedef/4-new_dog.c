#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	int x;
	int y;
	(void)age;

	if (name == NULL)
	{
		return (NULL);
	}

	for (x = 0; name[x] != '\0'; x++)
		name[x]++;

	for (y = 0; owner[y] != '\0'; y++)
		owner[y]++;

	return (0);
}

