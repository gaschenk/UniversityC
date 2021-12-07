#include "main.h"

// A1 a)
int isValidNumber(double a, double z, double n) {
    return (pow(a, n) < z) && (pow(a + 1, n) > z);
}

double getValidNumber(double z, double n) {
    double a = 0;
    while (isValidNumber(a, z, n) == 0) {
        //printf("%lf\n", a);
        a += PRECISION_STEP_SIZE;
        // break if unable to find any "a"
        //sane variant
        if (a >= SANITY_VALUE_FOR_A)
            return UNABLE_TO_FIND_A;
        //insane variant
        if (a >= DBL_MAX)
            return UNABLE_TO_FIND_A;
    }
    return a;
}

//A1 b)
double getRoot(double z, double n) {
    double a = getValidNumber(z, n);
    double b = a + 1;

    double result = 0;
    int counter = 0;

    while (counter <= PRECISION_SANITY_LIMIT) {
        double m = a + (b - a) / 2;
        double tempresult = pow(m, n);

        if (tempresult < z) {
            a = m;
        } else {
            b = m;
        }
        //printf("%lf\n", result);

        if (z - result <= PRECISION && z - tempresult <= PRECISION)
            return m;

        result = pow(a, n);
        counter++;

    }
    return PRECISION_ERROR;
}

double function(double x) {
    return pow(x, 3) - 2 * pow(x, 2) + x - 3;
}

double integrate(double start, double end, double step) {

}

int main() {
    char string[1024];
    snprintf(string, 1024, "%lf\n", getRoot(2.0, 2.0));
    puts(string);
    snprintf(string, 1024, "%lf\n", getRoot(4.0, 2.0));
    puts(string);
	snprintf(string, 1024, "%lf\n", getRoot(8.0, 3.0));
	puts(string);
	snprintf(string, 1024, "%lf\n", getRoot(16.0, 4.0));
	puts(string);
	snprintf(string, 1024, "%lf\n", getRoot(9.0, 2.0));
	puts(string);
	snprintf(string, 1024, "%lf\n", getRoot(25.0, 2.0));
	puts(string);
	snprintf(string, 1024, "%lf\n", getRoot(100.0, 2.0));
	puts(string);
	double z = 0.0f;
	double n = 0.0f;
	while (1) {
		scanf("%lf", &z);
		fflush(stdin);
		scanf("%lf", &n);
		fflush(stdin);
		snprintf(string, 1024, "%lf\n", getRoot(z, n));
		puts(string);
	}
}
