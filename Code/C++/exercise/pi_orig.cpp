#include <iostream>
#include <ctime>
using namespace std;

static int long numsteps = 100000;

int main() {

	double pi = 0;
	double dx = 1.0/numsteps;
	double x = 0;
	clock_t t_start = clock();
	for(int i = 0; i < numsteps; i++) {
		pi += ((4.0) / (1 + x*x)) * dx;
		x += dx;
	}
	
	clock_t t_end = clock();
	double time = double(t_end - t_start) / CLOCKS_PER_SEC * 1000;

	cout << "PI: " << pi << ", Duration: " << time << "ms\n";
	return 0;
}
