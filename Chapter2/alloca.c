#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *arr;
	arr = (int*)alloca(sizeof(int) * 12);
	printf("%lu\n", sizeof(arr));
	return 0;
}

