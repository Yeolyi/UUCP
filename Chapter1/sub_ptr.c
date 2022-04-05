#include <stdio.h>

// https://stackoverflow.com/questions/7954439/c-which-character-should-be-used-for-ptrdiff-t-in-printf
int main(void) {
	int vector[] = {28, 41, 7};
    int *p0 = vector;
    int *p1 = vector+1;
    int *p2 = vector+2;
    
    printf("p2-p0:  %td\n",p2-p0);
    printf("p2-p1:  %td\n",p2-p1);   
    printf("p0-p1:  %td\n",p0-p1);    
	return 0;
}
