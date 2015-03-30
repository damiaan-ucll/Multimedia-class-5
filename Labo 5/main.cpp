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

void ex2e() {
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

void ex2j() {
	IntArray a(6);
	for(int i=0; i<6; ++i){
		a[i] = i*i;
	}
	
	IntArray c;
	c = a;
	cout << c << endl ;
	c [0]=6;
	cout << a << endl ;
	cout << c << endl ;
	c.resize (3);
	cout << c << endl ;
}

void ex3(const IntArray list, const int number) {
	bool listContains[number+1];
	for (int i = 0; i<=number; ++i) listContains[i] =  false;
	
	
	for (int i=0; i<list.getLength(); ++i) {
		int x = list[i];
		
		bool relevant = x <= number;
		
		if (x <= number && !listContains[x] && listContains[number-x])
			cout << x << " + " << number-x << " = " << number << endl;
		if (relevant) listContains[x] = true;
	}
}

int main(int argc, const char * argv[]) {

//	ex2e();
	
//	ex2j();
	
	IntArray lijst(7);
	lijst[0] = 3;
	lijst[1] = 7;
	lijst[2] = 2;
	lijst[3] = 9;
	lijst[4] = 4;
	lijst[5] = 3;
	lijst[6] = 9;
	
	ex3(lijst, 11);
	
	IntArray lijst2 = lijst;
	
    return 0;
}
