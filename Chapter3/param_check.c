#include <stdio.h>

int add(int x) {
	return x+1;
}

int main(void) {
	int (*fp)(int) = add;
	printf("%d\n", fp(1, 2));
	return 0;
}

