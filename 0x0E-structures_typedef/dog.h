#ifndef DOG_H
#define DOG_H
/*guard of header file*/

/**
 * struct dog - stuct dog
 * @name:dog name
 * @age: dog age
 * @owner: owner name
 * Describtion: Define a new type struct dog
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
