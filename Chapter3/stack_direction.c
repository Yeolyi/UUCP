#include <stdio.h>

// https://stackoverflow.com/questions/1677415/does-stack-grow-upward-or-downward
void foo() {
	static int depth = 0;
	int local;
	printf("local%d: %p\n", depth, &local);
	if(depth++ < 5) {
		foo();
	}
	return;
}

int main() {
	foo();
	return 0;
}

