int main(void) {

	int res;

	double* x1;
	double* x2;

	res=soluzioni(2.0, 0.0, 4.0, &x1, &x2);
	res=soluzioni(9.0, 3.0, 1.0, &x1, &x2);
	res=soluzioni(123.958, 12.953, 45.098, &x1, &x2);
	res=soluzioni(123.958, 227.953, 45.098, &x1, &x2);
	res=soluzioni(1.0, -5.0, 6.0, &x1, &x2);
	res=soluzioni(1.0, 2.0, 1.0, &x1, &x2);
	


	return 0;
}