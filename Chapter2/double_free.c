#include <stdlib.h>

int main() {
	int *p1 = (int*)malloc(sizeof(int));
	int *p2 = p1;
	// ...
	free(p1);
	free(p2);
	
	return 0;
}
