#include "pi.h"
#include <ctime>

pi::pi(int numSteps)
  :steps(numSteps)
{

}
pi::~pi() {

}

int
pi::runTask(void) {

	double pi = 0;
	double dx = 1.0/steps;
	double x = 0;

	//Start timer	
	clock_t t_start = clock();

	for(int i = 0; i < steps; i++) {
		PI += ((4.0) / (1 + x*x)) * dx;
		x += dx;  
	}	
	clock_t t_end = clock();
	//End Timer

	double time = double(t_end - t_start) / (CLOCKS_PER_SEC) * 1000;
	

  return 0;
}

void
pi::Print(ostream &s) {
  s << "PI: " << PI << ", Duration: " << time << "ms\n";
}
