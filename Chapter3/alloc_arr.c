#include <stdlib.h>

void alloc_arr(int **arr, int size, int value) {
	*arr = (int*)malloc(sizeof(int) * size);
	if(*arr) {
		for(int i=0; i<size; i++) {
			*(*arr+i) = value;
		}
	}
}
