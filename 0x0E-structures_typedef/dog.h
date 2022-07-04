#ifndef _dog_h_
#define _dog_h_

/**
* struct dog - A struct datatype that stores info of a dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
*
* Description: struct called 'dog' storing name, age and owner
*
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* dog_t - Typedef of dog struct
*/

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
