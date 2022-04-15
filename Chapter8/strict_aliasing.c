// -fstrict-aliasing
// https://kldp.org/node/78184
// https://stackoverflow.com/questions/98650/what-is-the-strict-aliasing-rule
int main(void) {
	int a = 10;
	float b = a;

	int aa = 10;
	float *bb = &aa;

	return 0;
}

