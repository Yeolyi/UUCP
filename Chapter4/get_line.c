#include <stdio.h>
#include <stdlib.h>

char* get_line(void) {
	const size_t size_increment = 10;
	char* buffer = malloc(size_increment);
	char* current_pos = buffer;
	size_t maxlen = size_increment;
	size_t length = 0;
	int character;

	if(current_pos == NULL) { return NULL; }

	while(1) {
		character = fgetc(stdin);
		if(character == '\n') { break; }

		if(++length >= maxlen) {
			char *new_buffer = realloc(buffer, maxlen += size_increment);
			if (new_buffer == NULL) {
				free(buffer);
				return NULL;
			}

			current_pos += new_buffer - buffer;
			buffer = new_buffer;
		}
		*current_pos++ = character;
	}
	*current_pos = '\0';

	printf("size: %zu\n", length);
	return buffer;
}

int main(void) {
	char* input = get_line();
	printf("%s\n", input);
	return 0;
}

