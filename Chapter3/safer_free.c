#include <stdlib.h>
#include <stdio.h>

#define safe_free(p) safer_free((void**)&(p))

void safer_free(void **pp) {
	if (pp!=NULL && *pp!=NULL) {
		free(*pp);
		*pp = NULL;
	}
}

int main(void) {
	int *pi = (int*)malloc(sizeof(int));
	*pi = 5;
	printf("%p\n", pi);
	safe_free(pi);
	printf("%p\n", pi);
	safe_free(pi);
	printf("%p\n", pi);
	return 0;
}

