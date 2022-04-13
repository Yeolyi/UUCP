#include <stdio.h>
#include <stdlib.h>

// buffer로 NULL을 받도록 할 수도
char* format(char *buffer, size_t size, const char* name, size_t quantity, size_t weight) {
	snprintf(buffer, size, "Item: %s, Quantity: %zu, Weight: %zu", name, quantity, weight);
	return buffer;
}

int main(void) {
	// 배열 형식으로 선언하면 안됨!!!!
	char* buffer = malloc(sizeof(char) * 100);
	printf("%s\n", format(buffer, sizeof(char)*100, "Axle", 25, 45));
	return 0;
}

