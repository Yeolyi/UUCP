#include <stdio.h>

typedef union _conversin {
	float fNum;
	unsigned int uiNum;
} Conversion;

int isPositive1(float number) {
	Conversion conversion = { .fNum = number };
	return (conversion.uiNum & 0x80000000) == 0;
}

int main(void) {
	printf("%d\n", isPositive1(1.23f));
	printf("%d\n", isPositive1(-1.23f));

	return 0;
}

