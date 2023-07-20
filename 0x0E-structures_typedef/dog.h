#ifndef _DOG_H_
#define _DOG_H_

/**
 * doggy - Typedef for struct dog
 */
typedef struct dog doggy;

/**
 * struct dog - struct containing some dog info
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 *
 * description: basically this struct will be used to 
 * to collect data on dog name age and dog owner name
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};



#endif
