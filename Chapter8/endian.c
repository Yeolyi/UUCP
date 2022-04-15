#include <stdio.h>

int main(void) {
	int num = 0x12345678;
	char *pc = (char*)&num;
	
	for (int i=0; i<4; i++) {
		// unsequenced modification and access to "i"
		// https://stackoverflow.com/questions/33743254/c-unsequenced-modification-and-access-to-i
		// printf("%p: %02x \n", pc, (unsigned char)*pc++);
		printf("%p: %02x\n", pc, (unsigned char)*pc);
		pc++;
	}
	
	return 0;
}
