#include <stdlib.h>

int main(void) {
	int rows = 2;
	int columns = 5;
	int **matrix = (int**)malloc(rows*sizeof(int*));
	matrix[0] = (int*)malloc(rows*columns*sizeof(int));
	for(int i=1; i<rows; i++)
		matrix[i] = matrix[0]+i*columns;

	// matrix[1][2] 등 가능

	int *matrix2 = (int*)malloc(rows*columns*sizeof(int));
	// 위 형식 불가능, *(matrix + (i*columns) + j)
	
	return 0;
}

