#include <stdio.h>

size_t stringLength(char* str) {
	size_t length = 0;
	while(*str++) 
		length++;
	return length;
}

int main(void) {
	char* str = "12345";
	printf("%s\n", str);
	printf("%zu\n", stringLength(str));
	return 0;
}

