#include <stdio.h>

int main(void) {
	int matrix[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};
	int (*pmatrix)[5] = matrix;
	//int *pmatrix2[5] = matrix;
	int *pmatrix3 = &matrix[0][0]; // 그냥 matrix는 warning
	//int **pmatrix3 = matrix; 는 의미 없음

	printf("%p\n", pmatrix);
	printf("%p\n", pmatrix+1);
	printf("%p\n", pmatrix3);
	printf("%p\n", pmatrix3+1);

	//printf("%d %d\n", pmatrix[1][2], pmatrix3[1][2]); 
	printf("%d %d\n", pmatrix[1][2], *(pmatrix3+1*5+2));

	return 0;
}

