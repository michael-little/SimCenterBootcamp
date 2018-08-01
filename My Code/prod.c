#include <stdio.h>

int floatProd(float a, float b);

int main() {
	float float1, float2, prod;
	printf("Enter first integer: ");
	scanf("%f", &float1);  //read input to float 1
	printf("Enter second integer: ");
	scanf("%f", &float2);  //read input to float 2

	prod = floatProd(float1, float2);
	printf("product: %0.2f * %0.2f = %0.2f\n", float1, float2, prod);
	return(0);
}

int floatProd(float a, float b) {
	float prod = a * b;	
	return(prod);
}
