#include <stdio.h>

int main(void) {
	int num = 0x7fffffff;
	int *pi = &num;
	unsigned short *ps = (unsigned short*)pi;
	
	printf("pi: %p Value(16): %x Value(10): %d\n", pi, *pi, *pi);
	printf("pi: %p Value(16): %hx Value(10): %hd\n", ps, *ps, *ps);

	return 0;
}

