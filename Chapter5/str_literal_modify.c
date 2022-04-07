#include <stdio.h>

int main(void) {
	char *tabHeader = "Sound";
	*tabHeader = 'L';
	printf("%s\n", tabHeader);
	return 0;
}

