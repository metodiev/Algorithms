//============================================================================
// Name        : _1_Factorial.cpp
// Author      : Miroslav Metodiev
// Version     :
// Copyright   : Be smart and use your head
// Description :Factorial
//============================================================================

#include <stdio.h>

unsigned long factorial (unsigned n);

int main() {

	int f =  factorial(5);
	printf("Factorial is %d",f);

	return 0;
}

unsigned long factorial (unsigned n){

	unsigned i;
	unsigned long r = 1;

	for (i = 2; i < n; i++) {
		r*=i;

	}
return r;
}
