// https://stackoverflow.com/questions/10103453/is-typedef-inside-of-a-function-body-a-bad-programming-practice
#include <stdio.h>

int square(int num) {
	return num * num;
}

int main(void) {
	typedef int (*funcptr)(int);
	funcptr fptr2 = square;
	printf("%d\n", fptr2(7));
	return 0;
}

