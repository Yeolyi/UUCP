#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int arr1[12];
	int *arr2 = (int*)malloc(sizeof(int)*12);

	// https://stackoverflow.com/questions/2524611/how-can-one-print-a-size-t-variable-portably-using-the-printf-family
	printf("%zu\n", sizeof(arr1));
	printf("%zu\n", sizeof(arr2));
	
	return 0;
}

