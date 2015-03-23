//
//  main.cpp
//  Labo 5
//
//  Created by Damiaan Dufaux on 23/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include <iostream>
#include "ComplexNumber.h"
#include "IntArray.h"

using namespace std;

void ex1() {
	ComplexNumber z1(1, 2);
	ComplexNumber z2(2,3);
	ComplexNumber z3 = z1;
	
	cout << z3 << endl;
	
	ComplexNumber z4, z5;
	z5 = z4 = z2;
	cout << z4 << endl;
	cout << z5 << endl;
}

void ex2() {
	IntArray a(6);
	for (int i=0; i<6; ++i) {
		a[i] = i*i;
	}
	
	IntArray b = a;
	cout << b << endl;
	b[0]=7;
	cout << a << endl;
	cout << b << endl;
	b.resize(10);
	cout << b << endl;
}

int main(int argc, const char * argv[]) {

	ex2();
	
    return 0;
}
