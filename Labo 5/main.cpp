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

void ex3(const IntArray list, const int sum) {
	char listContains[min(100,sum+1)];
	for (int i = 0; i<=sum; ++i) listContains[i] = 0;
	
	
	for (int i=0; i<list.getLength(); ++i) {
		int &x = list[i];
		int complement = sum-x;
		
		if (x <= sum){
			if (listContains[complement]) {
				if (!listContains[x]) {
					cout << x << " + " << complement << " = " << sum << endl;
				} else {
					if (listContains[x] == 1 && x*2 == sum)
						cout << x << " + " << x << " = " << sum << endl;
					listContains[x] = 2;
				}
			}
			
			listContains[x] = listContains[x] | 1;
		}
		
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
		
    return 0;
}
