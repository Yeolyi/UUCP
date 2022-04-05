#include <stdio.h>
#include <stdlib.h>

float average(int *arr, int size) {
	static int dummy;
	int sum;
	int *heap = (int*)malloc(10);
	printf("parameter1: %p\n", &arr);
	printf("parameter2: %p\n", &size);
	printf("local:      %p\n", &sum);
	printf("heap var    %p\n", &heap); // 20 - 18 == 18이다... 그리고 &heap은 할당된 곳의 주소가 아님. 
	printf("heap:       %p\n", heap); // heap이 더 크게 나오는데 virtual memory를 공부하고 다시 찾아올 것,,
	printf("static:     %p\n", &dummy);
	
	for(int i=0; i<size; i++) {
		sum += arr[i];
	}
	
	return (sum * 1.0f) / size;
}


int main(void) {
	int arr[] = {1, 2, 3, 4, 5};
	printf("%f\n", average(arr, 5));
	return 0;
}

