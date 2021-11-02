#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - input
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * @d: struct name
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
