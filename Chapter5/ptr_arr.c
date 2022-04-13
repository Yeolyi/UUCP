#include <stdlib.h>

// https://stackoverflow.com/questions/6567742/passing-an-array-as-an-argument-to-a-function-in-c
void test(char* argv[]) {
	argv =  NULL;
	return;
}

int main(void) {
	char* arr[1];
	test(arr);
	return 0;
}

