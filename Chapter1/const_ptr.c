int main(void) {
	const int num;
	int num2;
	int *const cpi = &num;
	// cpi = &num2;
	*cpi = 20;
	return 0;
}
