//
//  Cents.cpp
//  DemoCPuse
//
//  Created by jinxin on 15/09/2017.
//  Copyright © 2017 jinxin. All rights reserved.
//

#include "Cents.hpp"
#include <iostream>

std::ostream& operator<< (std::ostream &out, const Cents &cents){
	out << cents.m_cents << " cents ";
	return out;
}

bool operator>(const Cents &c1, const Cents &c2)
{
	return (c1.m_cents > c2.m_cents);
}





