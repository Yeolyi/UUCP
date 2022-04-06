#include <stdlib.h>

// https://stackoverflow.com/questions/6567742/passing-an-array-as-an-argument-to-a-function-in-c 
void foo(int arr[]) {
	arr = NULL;
}

int main() {
	int* x;
	foo(x);
	return 0;
}

