#include <stdio.h>

int add(int num1, int num2) {
	return num1 + num2;
}

int subtract(int num1, int num2) {
	return num1 - num2;
}

typedef int (*operation)(int, int);
operation operations[128] = {NULL};

void initializeOperationsArray() {
	operations['+'] = add;
	operations['-'] = subtract;
}

int evaluateArray(char opcode, int num1, int num2) {
	operation op;
	op = operations[opcode];
	return op(num1, num2);
}

int main(void) {
	initializeOperationsArray();
	printf("%d\n", evaluateArray('+', 5, 6));
	printf("%d\n", evaluateArray('-', 5, 6));
	return 0;
}

