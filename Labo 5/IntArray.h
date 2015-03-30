//
//  IntArray.h
//  Labo 3
//
//  Created by Damiaan Dufaux on 24/02/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __Labo_3__IntArray__
#define __Labo_3__IntArray__

#include <stdio.h>
#include <cmath>
#include <iostream>

class IntArray {
	
	int length = 0;
	int *data;
	
	void copy(const int *, int *, const unsigned);
	void copy(const int *, int *);
	void fill(const int value, const int start = 0);

public:
	
	IntArray(const int length = 0);
	IntArray(const IntArray &);
	IntArray &operator = (const IntArray &original);
	~IntArray() {delete [] data;}
	void resize(unsigned length);
	
	int &operator [] (const unsigned index) const {return data[index];}
	int getLength() const {return length;}
	
	friend std::ostream &operator << (std::ostream &stream, const IntArray &array);
		
	void set(unsigned index, int value);
	void insertBefore(unsigned index, int value);
	
	int * getData() {return data;}
	
};

#endif /* defined(__Labo_3__IntArray__) */