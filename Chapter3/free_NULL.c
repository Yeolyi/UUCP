#include <stdlib.h>

// https://stackoverflow.com/questions/1938735/does-freeptr-where-ptr-is-null-corrupt-memory
// The free function causes the space pointed to by ptr to be deallocated, that is, made available for further allocation. If ptr is a null pointer, no action occurs.
int main(void) {
	free(NULL);
	return 0;
}

