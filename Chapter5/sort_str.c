#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> //tolower

typedef int (fptr)(const char*, const char*);

char* stringToLower(const char* string) {
	char *tmp = (char*)malloc(strlen(string)+1);
	char *start = tmp;
	while (*string) 
		*tmp++ = tolower(*string++);
	*tmp = 0;
	return start;
}

int compare(const char* s1, const char* s2) {
	return strcmp(s1, s2);
}

int compareIgnoreCase(const char* s1, const char* s2) {
	char *t1 = stringToLower(s1);
	char *t2 = stringToLower(s2);
	int result = strcmp(t1, t2);
	free(t1);
	free(t2);
	return result;
}

void sort(char *arr[], int size, fptr operation) {
	int swap = 1;
	while(swap) {
		swap = 0;
		for (int i=0; i<size-1; i++) {
			if (operation(arr[i], arr[i+1]) > 0) {
				swap = 1;
				char *tmp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = tmp;
			}
		}
	}
}

void displayNames(char *names[], int size) {
	for (int i=0; i<size; i++) 
		printf("%-10s", names[i]);
	printf("\n");
}

int main(void) {
	char* names[] = {"Bob", "Ted", "Carol", "Alice", "alice"};
	sort(names, 5, compareIgnoreCase);
	displayNames(names, 5);
	return 0;
}


