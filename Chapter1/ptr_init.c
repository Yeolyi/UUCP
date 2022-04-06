#include <stdio.h>

int main(void) {
	const int *pci;
	int const *cpi;
	const int * const cpci;

	int num = 10;
	// cpci = &num;
	printf("%p\n", cpci);

	return 0;
}

