//
//  ComplexNumber.cpp
//  Labo 4
//
//  Created by Damiaan Dufaux on 17/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "ComplexNumber.h"

// Constructor
ComplexNumber::ComplexNumber(double real, double imaginary) {
	this->real = real;
	this->imaginary = imaginary;
}

// Copy constructor
ComplexNumber::ComplexNumber(const ComplexNumber &number) {
	real = number.real;
	imaginary = number.imaginary;
}

// Assignment operator
ComplexNumber &ComplexNumber::operator = (const ComplexNumber &number) {
	if (this == &number) return *this;
	real = number.real;
	imaginary = number.imaginary;
	
	return *this;
}

std::ostream& operator << (std::ostream& stream, const ComplexNumber& number) {
	stream << number.real;

	if (number.imaginary > 0)
		stream << "+";
	else if (number.imaginary == -1)
		stream << "-";

	if (number.imaginary != 0) {
		if (fabs(number.imaginary) != 1)
			stream << number.imaginary;
		stream << "i";
	}
	
	return stream;
}

std::istream& operator >> (std::istream& stream, ComplexNumber& number) {
	return stream >> number.real >> number.imaginary;
}

double &ComplexNumber::operator [] (const int index) {
	return index==0 ? real : imaginary;
}

ComplexNumber ComplexNumber::operator - () {
	return ComplexNumber(-real, -imaginary);
}

ComplexNumber ComplexNumber::operator*(ComplexNumber &number) {
	return ComplexNumber(real*number.real - imaginary*number.imaginary, real*number.imaginary + imaginary*number.real);
}

ComplexNumber ComplexNumber::operator*(double number) {
	return ComplexNumber(number*real, number*imaginary);
}

ComplexNumber operator * (double number, ComplexNumber &complexNumber){
	return complexNumber * number;
}
