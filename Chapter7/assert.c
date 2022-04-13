#include <stdlib.h>
#include <assert.h>

int main(void) {
	int *pi = NULL;
	assert(pi != NULL);
	*pi = 3;
	return 0;
}

