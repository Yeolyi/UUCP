#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char name[32];
	char *names[30];
	size_t count = 0;

	for (int i=0; i<3; i++) {
		printf("Enter a name: ");
		scanf("%s", name);
		names[count] = (char*)malloc(strlen(name)+1);
		strcpy(names[count], name);
		count++;
	}

	for (int i=0; i<3; i++) {
		printf("%s\n", names[i]);
	}

	return 0;
}
