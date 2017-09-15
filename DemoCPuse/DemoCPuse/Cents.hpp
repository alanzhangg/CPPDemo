//
//  Cents.hpp
//  DemoCPuse
//
//  Created by jinxin on 15/09/2017.
//  Copyright © 2017 jinxin. All rights reserved.
//

#ifndef Cents_hpp
#define Cents_hpp

#include <stdio.h>
#include <iostream>

class Cents{
private:
	int m_cents;
public:
	Cents(int cents): m_cents(cents){
	}
	int getm_cents(){return m_cents;}
	friend bool operator>(const Cents &c1, const Cents &c2);
	friend std::ostream& operator << (std::ostream & out, const Cents &cents);
	void operator+=(Cents cents){
		m_cents += cents.m_cents;
	}
	
	void operator/=(int value){
		m_cents /= value;
	}
};

#endif /* Cents_hpp */
