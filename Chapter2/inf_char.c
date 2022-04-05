#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char* c = (char*)malloc(10);
	printf("%s", c);
	
	for(int i = 0; i <= 20; i++) {
		printf("%d ", c[i]);
	}

	return 0;
}
