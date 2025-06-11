#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - describes a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner
 * Description: This structure represent a dog object
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
