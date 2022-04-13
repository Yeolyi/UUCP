#include <stdio.h>

char* return_str_arr() {
	char str[10] = "ABCDEF";
	return str;
}

int main(void) {
	char *str = return_str_arr();
	printf("%s\n", str);
	return 0;
}

