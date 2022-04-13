#include <stdio.h>

typedef struct _person1 {
	char *firstName;
	char *secondName;
	short age;
} Person1;

typedef struct _person2 {
	char *firstName;
	short age;
	char *secondName;
} Person2;

int main(void) {
	Person1 person1;
	Person2 person2;
	printf("%zu %zu\n", sizeof(person1), sizeof(person2));

	Person1 peerson1[10];
	Person2 peerson2[10];
	printf("%zu %zu\n", sizeof(peerson1), sizeof(peerson2));
	return 0;
}

