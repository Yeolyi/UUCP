#include <stdio.h>

// https://stackoverflow.com/a/6326569
// https://wiki.sei.cmu.edu/confluence/display/c/INT36-C.+Converting+a+pointer+to+integer+or+integer+to+pointer
int main(void) {
	long num; // 교재에서는 int로 하지만 세상이 바뀌어서? intptr_t가 64비트 사이즈이다.
	intptr_t pi = (uintptr_t)&num; 
	uintptr_t pu = (uintptr_t)&num;

	printf("num address: %ld\n", pi); // 확인 필요
	printf("num address: %ld\n", &num);

	printf("long size: %lu\n", sizeof(num));	
	printf("intptr_t size: %lu\n", sizeof(pi));
	printf("uintptr_t size: %lu\n", sizeof(pu));

	return 0;
}
