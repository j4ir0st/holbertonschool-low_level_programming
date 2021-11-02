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
 * @d: struct name
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
