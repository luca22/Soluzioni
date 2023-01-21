#include <math.h> 

int soluzioni(double a, double b, double c, double* x1, double* x2) {



	double dis = b * b - 4 * a * c;

	if (dis < 0) {

		return 0;
	}

	else {

		if (dis == 0) {

			*x1 = ((-b) + sqrt(dis)) / (2 * a);
			

			return 1;

		}

		else {


			if (dis > 0) {

				*x1 = ((-b) + sqrt(dis)) / (2 * a);
				*x2 = ((-b) - sqrt(dis)) / (2 * a);

				return 2;

			}
		}
	}

	


}