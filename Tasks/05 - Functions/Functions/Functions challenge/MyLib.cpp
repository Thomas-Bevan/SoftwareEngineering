
int add(int a, int b) {
	int result;
	result = a + b;
	return result;
}

int subtract(int a, int b) {
	int result;
	if (a > b) {
		result = a - b;
	}
	else {
		result = b - a;
	}
	return result;
}

int multiply(int a, int b) {
	int result;
	result = a * b;
	return result;
}

double divide(int a, int b) {
	double result;
	result = double(a) / double(b);
	return result;
}