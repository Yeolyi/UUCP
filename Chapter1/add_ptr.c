#include <stdio.h>

int arr[10];

int main(void) {
	int *p = arr;

	while(1) {
		printf("%d ", *p);
		p += 1; 
	}

	return 0;
}
