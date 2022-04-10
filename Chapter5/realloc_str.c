#include <stdlib.h>

int main(void) {
	char* str = "Hello";
	str = realloc(str, 100);
	return 0;
}

