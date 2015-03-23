//
//  main.cpp
//  Labo 5
//
//  Created by Damiaan Dufaux on 23/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include <iostream>
#include "ComplexNumber.h"

using namespace std;

void ex2() {
	ComplexNumber z1(1, 2);
	ComplexNumber z2(2,3);
	ComplexNumber z3 = z1;
	
	cout << z3 << endl;
	
	ComplexNumber z4, z5;
	z5 = z4 = z2;
	cout << z4 << endl;
	cout << z5 << endl;
}

int main(int argc, const char * argv[]) {

	ex2();
	
    return 0;
}
