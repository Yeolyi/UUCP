#include <string.h>
#include <stdio.h>

int main(void) {
	char name[8];
	char name2[8];

	// int result; strlcpy는 값을 반환함
	
	strlcpy(name, "Alexander", sizeof(name));
	printf("%s\n", name);

	strcpy(name2, "Alexander");
	printf("%s\n", name2);

	return 0;
}

