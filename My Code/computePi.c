#include <stdio.h>
#include <time.h>

double myFunc(double x);

static int long numsteps = 100000;

int main() {

	double pi = 0; double time = 0;
	double dx = 1.0/numsteps;
	double x = 0;
	double t_start = clock();
	for(int i = 0; i < numsteps; i++) {
		pi += ((4.0) / (1 + x*x)) * dx;
		x += dx;
	}

	time = (clock() - t_start) / ((double)CLOCKS_PER_SEC) * 1000;
	printf("PI = %f, duration: %f ms\n", pi, time);
	return 0;
}
