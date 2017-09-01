//
//  TypecastsOverloading.cpp
//  DemoCPuse
//
//  Created by jinxin on 01/09/2017.
//  Copyright © 2017 jinxin. All rights reserved.
//

#include "TypecastsOverloading.hpp"
#include <iostream>


class Dollars
{
private:
	int m_dollars;
public:
	Dollars(int dollars=0)
	{
	m_dollars = dollars;
	}
	
		// Allow us to convert Dollars into Cents
	operator Cents() { return Cents(m_dollars * 100); }
};

void printCents(Cents cents)
{
	std::cout << cents; // cents will be implicitly cast to an int here
}

int main()
{
	Dollars dollars(9);
	printCents(dollars); // dollars will be implicitly cast to a Cents here
	
	return 0;
}
