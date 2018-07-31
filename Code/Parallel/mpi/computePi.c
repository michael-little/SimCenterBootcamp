#include <mpi.h>
#include <stdio.h>
#include <time.h>

double myFunc(double x);

static int long numsteps = 100000;

int main(int argc, char**argv) {

	int procID, numP;
	MPI_Init( &argc, &argv);
	MPI_Comm_size( MPI_COMM_WORLD, &numP );
	MPI_Comm_rank( MPI_COMM_WORLD, &procID );

	double pi = 0; double time = 0;
	double dx = 1.0/numsteps;
	double x = procID / numP;
	double t_start = clock();
	for(int i = 0; i < numsteps / numP; i++) {
		pi += myFunc(x) * dx;
		x += dx;
	}

	time = (clock() - t_start) / ((double)CLOCKS_PER_SEC) * 1000;
	printf("Procedure: %d PI_i = %f, duration: %f ms\n", procID, pi, time);
	return 0;
}


double myFunc(double x) {
	return ((4.0) / (1 + x*x));

}
