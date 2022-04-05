#include <stdio.h>

int main(void) {
	int num = 5;
	void *pv = &num;
	printf("%p\n", pv);
	pv += 1;
	printf("%p\n", pv);
	return 0;
}
