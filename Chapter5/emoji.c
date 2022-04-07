#include <stdio.h>
#include <string.h>

// https://stackoverflow.com/questions/27547377/format-specifier-for-unsigned-char
int main(void) {
	// Bytes(utf-8) \xF0\x9F\x98\x81
	// Unicode      U+1F601

	// F0(char) -> FFF0(int) -> -16 인건가?

	char* str = "😁";

	printf("%s\n", str);

	int size = strlen(str);
	printf("size: %d\n", size);

	for (int i=0; i<size; i++)
		printf("%d ", (unsigned char)str[i]); // 캐스팅 없애면 음수값 나옴

	printf("\n");

	return 0;
}

