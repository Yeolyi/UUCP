#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr1[10];
	int *arr2 = (int*)malloc(sizeof(int)*10);
	int *arr3 = (int*)alloca(sizeof(int)*10);

	printf("%ld %ld %ld\n", sizeof(arr1), sizeof(arr2), sizeof(arr3));
	return 0;
}

