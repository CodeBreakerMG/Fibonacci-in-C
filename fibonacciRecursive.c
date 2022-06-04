/*
Fibonacci Series C Programme, with Recursion.
Made by Manuel Moran.
Parameter for Fibonacci : "number" variable
MAXIMUM NUMBER VALUE : 499.
*/

#include <stdio.h>

int arr[500];

int Fibonacci(int n){
	if (n <= 1){
		arr[n] = 1;
		return n;
	}
	arr[n-1] = Fibonacci(n - 1);
	arr[n-2] = Fibonacci(n - 2);
	
	return arr[n-1] + arr[n-2];
}

int main(void){
	
	int number = 15;
	printf("Fibonacci series until No.%d number\n", number);
	printf("Programme made by Manuel Moran (CodeBreakerMG)\n**************\n\n");
	Fibonacci(number+1);
	for (int i = 0; i < number; i++)
		printf("%d\n", arr[i]);
	return 0;
}
 
