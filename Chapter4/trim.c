#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* trim(char* phrase) {
	char *old = phrase;
	char *new = phrase;

	while(*old == ' ')
		old++;

	while(*old) 
		*(new++) = *(old++);

	*new = 0;
	return (char*)realloc(phrase, strlen(phrase)+1);
}

int main() {
	char* buffer = (char*)malloc(strlen("    Hello"));
	strcpy(buffer, "    Hello");
	printf("%s\n", trim(buffer));
	return 0;
}

