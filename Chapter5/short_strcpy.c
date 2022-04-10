#include <stdio.h>
#include <stdlib.h>

// https://stackoverflow.com/questions/859770/post-increment-on-a-dereferenced-pointer
void my_strcpy(const char *src, char *dst) {
	while ((*dst++ = *src++));
}

int main(void) {
	char src[] = "Hello";
	char* dst = malloc(sizeof(char) * 6);
	my_strcpy(src, dst);
	printf("%s\n", dst);
	return 0;
}

