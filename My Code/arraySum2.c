#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv) {
	int mySum = 0;
	int size = argc - 1;
	int* data = (int*)malloc(size*sizeof(int));
	int* ind = (int*)malloc(size*sizeof(int));
	int* ind_2 = (int*)malloc(size*sizeof(int));
	
	for(int i = 0; i< size; i++) {
		data[i] = atoi(argv[i+1]);
		ind[i] = 1;
		ind_2[i] = 0;
	}

	for(int i = 0; i < size; i++) {
		for(int k = 0; k < size; k++) {
			if ((data[i] == data[k]) & (i != k)) {
				ind[i] ++;
				if(k > i) {
					ind_2[i] ++;
				}
			} else {
			}
		}
	}

	for(int i = 0; i < size; i++) {
		mySum += data[i];
		
		if(ind_2[i] > 0){
			continue;
		} else if(ind[i] == 1) {
			if(i != size - 1) {
				printf("%d + ", data[i]);			
			} else {
				printf("%d = ", data[i]);
			}			
		} else {
			
			if(i != size - 1) {
				printf("%d*%d + ", ind[i], data[i]);			
			} else {
				printf("%d*%d = ", ind[i], data[i]);
			}
		}
	}

	//mySum = arraySum(data, size);
	printf("%d\n", mySum);
}	       

//Write a program that takes a number of integer values from argc, stores them in an array,
//computes the sum of the array and outputs some nice message. Try using recursion to
//compute the sum. (hint start with recursion1.c and google function atof(), copy from
//memory1.c)
