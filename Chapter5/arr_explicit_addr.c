#include <stdio.h>

// The address-of operator is used explicitly. This is redundant and unnecessary. In addition, it will often generate a warning.

int main(void) {
	char arr[] = "Hello";
	printf("%p\n", &arr);
	return 0;
}

