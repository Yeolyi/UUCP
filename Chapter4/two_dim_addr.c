#include <stdio.h>

int main(void) {
	int matrix[2][3];
	
	for (int i=0; i<2; i++) {
		printf("&matrix[%d]: %p, size: %zu\n", i, &matrix[i], sizeof(matrix[i]));
	}

	return 0;
}

