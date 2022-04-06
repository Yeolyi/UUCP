#include <stdlib.h>

int main(void) {
	int *pi = (int*)malloc(sizeof(int));
	free(pi);
	pi = NULL;
	// ...
	*pi = 3;
	return 0;
}

