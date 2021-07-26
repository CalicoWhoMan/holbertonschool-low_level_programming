#ifndef dog_h
#define dog_h

/**
 * struct dog - name, age, and owner of dog
 * @name: name var
 * @age: age var
 * owner: owner var
 */

struct dog

{
	char *name;
	float age;
	char *owner;
}
dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* dog_h */
