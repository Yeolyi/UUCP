#include <string.h>
#include <stdlib.h>

int main(void) {
	char *name = (char*)malloc(strlen("Susan"));
	strcpy(name, "Susan");
	while(*name != 0) {
		name++;
	}
	return 0;
}
