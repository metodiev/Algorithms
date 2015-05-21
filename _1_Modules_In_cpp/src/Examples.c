/*
 * Examples.c
 *
 *  Created on: 21.05.2015 ã.
 *      Author: Miroslav.Metodiev
 *      Examples for quotient and remainder from division
 */
#include<stdio.h>

int main(void){
	int m = -3;
	int n = -7;
	int q = 0;
	int r = 0;
	int isTrue = 0;
	int temp = 0;
	q = n/m;
	r = n%m;



	printf("quotient is %d\n",q);
	printf("reminder is %d\n",r);
	temp = q*m +r;
	if(n == temp){
		isTrue = 1;
		printf("The result is true");
	}
	else {
		isTrue = 0;
		printf("The result is False");
	}

}

