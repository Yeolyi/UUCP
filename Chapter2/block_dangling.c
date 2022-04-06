int main(void) {
	int *pi;

	{
		int tmp = 5;
		pi = &tmp;
	}
	while(1) 
		*pi += 1;
}

