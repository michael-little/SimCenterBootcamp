#include <stdio.h>

int sumInt(int a, int b);

int main() {
	int integer1, integer2, sum;
	printf("Enter first integer: ");
	scanf("%d", &integer1);  //read input to integer 1
	printf("Enter second integer: ");
	scanf("%d", &integer2);  //read input to integer 2

	sum = sumInt(integer1, integer2);
	printf("sum %d + %d = %d\n", integer1, integer2, sum);
	return(0);
}

int sumInt(int a, int b) {
	int sum = a + b;	
	return(sum);
}
