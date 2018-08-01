#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv) {
	int mySum;
	int size = argc - 1;
	int *data = (int*)malloc(size*sizeof(int));
	
	for(int i = 0; i< size; i++) {
		data[i] = atoi(argv[i+1]);
	}

	for(int i = 0; i < size; i++) {
		mySum += data[i];		
		if((i != size - 1)) {
			printf("%d + ", data[i]);
		} else {
			printf("%d = ", data[i]);
		}
	}


	//mySum = arraySum(data, size);
	printf("%d\n", mySum);
}	       

//Write a program that takes a number of integer values from argc, stores them in an array,
//computes the sum of the array and outputs some nice message. Try using recursion to
//compute the sum. (hint start with recursion1.c and google function atof(), copy from
//memory1.c)
