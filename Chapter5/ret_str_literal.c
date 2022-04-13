#include <stdio.h>

char* ret_str_literal() {
	return "ABCDEFG";
}

int main(void) {
	char *first = ret_str_literal();
	printf("%s\n", first);
	//first[0] = 'Z';
	//printf("%s\n", first);
	char *second = ret_str_literal();
	printf("%s\n", second);
	return 0;
}

