#include <stdlib.h>

int main(void) {
	int a = 3;
	free(&a);
	return 0;
}
