//
//  IntArray.cpp
//  Labo 3
//
//  Created by Damiaan Dufaux on 24/02/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "IntArray.h"

IntArray::IntArray(const int length) {	
	this->length = length;
	data = new int[length];
	fill(0);
}

IntArray::IntArray(const IntArray & original) {
	data = new int[original.length];
	this->length = original.length;
	copy(original.data, data);
}

IntArray &IntArray::operator = (const IntArray &original) {
	data = new int[original.length];
	this->length = original.length;
	copy(original.data, data);
	return *this;
}

void IntArray::resize(unsigned newLength) {
	if (newLength > 0 && newLength != length) {
		int *newData = new int[newLength];
		int toCopy = fmin(length, newLength);
		
		copy(data, newData, toCopy);
		fill(0, toCopy);
		
		delete [] data;
		data = newData;
		
		length = newLength;
	} else {
		data = 0;
	}
}


void IntArray::copy(const int *source, int *destination, const unsigned length) {
	for (int i = 0; i < length; ++i) destination[i] = source[i];
}

void IntArray::copy(const int *source, int *destination) {
	copy(source, destination, length);
}

void IntArray::fill(const int value, const int start) {
	for (int i = start; i<length; ++i) data[i] = 0;
}

void IntArray::set(unsigned index, int value) {
	if (index<length) data[index] = value;
}

void IntArray::insertBefore(unsigned int index, int value) {
	if (index < length) {
		resize(length + 1);
		for (int i = length-1; i>index; --i) {
			data[i] = data[i-1];
		}
		data[index] = value;
	}
}

std::ostream &operator << (std::ostream &stream, const IntArray &array) {
	for (int i = 0; i < array.length-1; ++i) {
		stream << array[i] << " ";
	}
	return stream << array[array.length-1];
}