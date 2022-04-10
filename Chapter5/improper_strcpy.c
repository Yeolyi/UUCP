#include <stdio.h>
#include <string.h>

int main(void) {
	char* error = "ERROR: ";
	char* errorMessage = "Not enough memory";

	// error = strcat(error, errorMessage);
	// strcat(error, errorMessage);
	printf("%s\n%s\n", error, errorMessage);

	return 0;
}

