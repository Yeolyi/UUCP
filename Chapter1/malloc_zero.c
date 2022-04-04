#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int *a = NULL;
	a = malloc(0);
	printf("%p\n", a);
    return 0;
}

