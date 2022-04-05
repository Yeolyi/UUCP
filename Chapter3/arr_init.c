#include <stdio.h>
#include <string.h> // ????

// https://stackoverflow.com/questions/201101/how-to-initialize-all-members-of-an-array-to-the-same-value
// 1000000010000000100000001 == 16843009
int main(void) {
	int arr[10] = { 1 };
	int x[3] = {0, 1, -1};

	for (int i=0; i<3; i++) {
		memset(arr, x[i], sizeof(arr));
		printf("%d -> %d\n", x[i], arr[0]);
	}

	return 0;
}

