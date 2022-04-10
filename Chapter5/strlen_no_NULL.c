#include <string.h>
#include <stdio.h>

int main(void) {
	char* str = "12345";
	printf("%zu\n", strlen(str));
	char* str2 = "12345\06\078\0";
	printf("%zu\n", strlen(str2));
	char str3[10] = "12345\067\08";
	printf("%zu\n", strlen(str3));

	for (int i=0; i<10; i++) 
		printf("%d\n", str3[i]);

	return 0;
}

