#include <stdio.h>
#include <string.h>

// https://stackoverflow.com/questions/27547377/format-specifier-for-unsigned-char
int main(void) {
	// Bytes(utf-8) \xF0\x9F\x98\x81
	// Unicode      U+1F601

	// F0(char) -> FFF0(int) -> -16 μΈκ±΄κ°?

	char* str = "π";

	printf("%s\n", str);

	int size = strlen(str);
	printf("size: %d\n", size);

	for (int i=0; i<size; i++)
		printf("%d ", (unsigned char)str[i]); // μΊμ€ν μμ λ©΄ μμκ° λμ΄

	printf("\n");

	return 0;
}

