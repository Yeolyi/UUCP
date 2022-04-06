int main(void) {
	int num = 5;
	int num2 = 10;
	const int *pci = &num;
	int const *pci2 = &num;
	pci = &num2;
	// *pci = 10;
	int *p = pci;
	*p = 20;
	return 0;
}
