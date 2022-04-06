#include <stdlib.h>

int main(void) {
	int *pi = (int*)malloc(100);
	int *pi2 = realloc(pi, 200);
	free(pi);
	return 0;
}

