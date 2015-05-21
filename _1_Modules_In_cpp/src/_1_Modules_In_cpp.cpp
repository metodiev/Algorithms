//============================================================================
// Name        : _1_Modules_In_cpp.cpp
// Author      : Miroslav Metodiev
// Version     :
// Copyright   : Be smart and use your head 
// Description : Program for counting how digits we have in number
//============================================================================

#include <iostream>
using namespace std;
unsigned n = 4242;

int test() {
	unsigned digits;
		for (digits = 0; n > 0; n /= 10, digits++);
		printf("The numbers of digits are %u and %u\n ",n, digits);
		return 0;
}
