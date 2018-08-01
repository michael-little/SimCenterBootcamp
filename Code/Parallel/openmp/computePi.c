#include <stdio.h>
#include <time.h>
#include <omp.h>
#include <stdlib.h>
#define DATA_SIZE 100000

int main(int argc, char *argv[]) {

double PI = 0;
double time = 0;
double t_start = clock();


	#pragma omp parallel reduction(+:PI)
	{

	int tid = omp_get_thread_num();
	int numT = omp_get_num_threads();	

	double pi = 0; 
	double dx = 1.0/DATA_SIZE;
	double x = 0;
	
	#pragma omp for
		for(int i = tid; i < DATA_SIZE; i+= numT) {
			pi += ((4.0) / (1 + x*x)) * dx;
			x += dx;
		}
	
	PI += pi;	

	printf("Process:  %d,  Total Processes:  %d", tid, numT);
	printf("part of pi = %d", pi);
	

	}
time = (clock() - t_start) / ((double)CLOCKS_PER_SEC) * 1000;
printf("PI = %f, duration: %f ms\n", pi, time);

	return 0;
}
