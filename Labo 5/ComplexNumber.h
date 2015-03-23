//
//  ComplexNumber.h
//  Labo 4
//
//  Created by Damiaan Dufaux on 17/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __Labo_4__ComplexNumber__
#define __Labo_4__ComplexNumber__

#include <stdio.h>
#include <iostream>
#include <cmath>

class ComplexNumber{
	
	double real;
	double imaginary;
	
public:
	
	ComplexNumber() {real = imaginary = 0;}
	ComplexNumber(double, double);
	ComplexNumber(const ComplexNumber &other);
	ComplexNumber &operator = (const ComplexNumber &);
	
	double const getX() { return real; }
	double const getY() { return imaginary; }
	
	void setX(double x) { real = x; }
	void setY(double y) { imaginary = y; }
	
	friend std::ostream &operator << (std::ostream&, const ComplexNumber&);

	friend std::istream &operator >> (std::istream&, ComplexNumber&);
	
	double &operator [] (const int index);

	ComplexNumber operator - ();
	ComplexNumber operator * (ComplexNumber&);
	ComplexNumber operator * (double);
	friend ComplexNumber operator * (double, ComplexNumber&);
	
};

#endif /* defined(__Labo_4__ComplexNumber__) */
