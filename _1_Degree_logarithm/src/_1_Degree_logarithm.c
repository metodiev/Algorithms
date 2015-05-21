/*
 ============================================================================
 Name        : _1_Degree_logarithm.c
 Author      : Miroslav Metodiev
 Version     :
 Copyright   : Be smart and use your head
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

double power(double x, unsigned y);

int main(void) {
	power(2.2f,5);
	return EXIT_SUCCESS;
}



double power(double x, unsigned y){

	double res = x;

	unsigned i;
	printf("%f\n",x);
	printf("%d\n",y);
	for (i = 1; i < y; i++) {
		res *=x;
		printf("Result: %f\n", res);
	}

	return res;

}
