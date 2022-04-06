#include <stdio.h>

int main(void) {
	int (*(arr1[])) = {
		(int[3]){0,1,2},
		(int[3]){3,4,5},
		(int[3]){6,7,8}};
	
	// 책은 j가 먼저네?!
	for(int j=0; j<3; j++) 
		for(int i=0; i<3; i++)
			printf("arr1[%d][%d] Address: %p Value: %d\n", j, i, &arr1[j][i], arr1[j][i]);

	printf("\n");

	int (*(arr2[])) = {
		(int[]) {0,1,2,3},
		(int[]) {4,5}};
	
	for (int i=0; i<4; i++)
		printf("arr2[0][%d] Address: %p Value: %d\n", i, &arr2[0][i], arr2[0][i]);

	for (int i=0; i<2; i++)
		printf("arr2[1][%d] Address: %p Value: %d\n", i, &arr2[1][i], arr2[1][i]);
	return 0;
}

