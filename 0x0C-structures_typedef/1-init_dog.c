#include "dog.h"

/**
* init_dog - initialize dog struct
* @d - struct
* @name - dog's name
* @age - dog's age
* @owner - dog's owner
*
* How initialize a strcut in C
*/
void init_dog(struct dog *d, char *name, float age, char *owner) {
struct dog d;
d.name = *name;
d.age = age;
d.owner = *owner;

}
