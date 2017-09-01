//
//  main.cpp
//  DemoCPuse
//
//  Created by jinxin on 2017/8/8.
//  Copyright © 2017年 jinxin. All rights reserved.
//

#include <iostream>
#include <string>
#include "IncreDecreOverload.hpp"
#include "SubscripOverloading.hpp"

class Car{
private:
	std::string m_make;
	std::string m_model;
public:
	Car(std::string make, std::string model) : m_make(make), m_model(model){
	}
	friend bool operator==(const Car &c1, const Car &c2);
	friend bool operator!=(const Car &c1, const Car &c2);
};

bool operator==(const Car &c1, const Car &c2){
	return (c1.m_make == c2.m_make && c1.m_model == c2.m_model);
}

bool operator!=(const Car &c1, const Car &c2){
	return !(c1 == c2);
}

int main(){
    Digit digit(8);
    
    std::cout << digit;
    std::cout << ++digit; // calls Digit::operator++();
    std::cout << digit++; // calls Digit::operator++(int);
    std::cout << digit;
    std::cout << --digit; // calls Digit::operator--();
    std::cout << digit--; // calls Digit::operator--(int);
    std::cout << digit;
	
	std::cout << std::endl;
	
	IntList list;
	list[2] = 3;
	std::cout << list[2];
	const IntList clist;
	std::cout << clist[2];
	
	IntList * lists = new IntList;
	(*lists)[2] = 3;
	std::cout << (*lists)[2] << '\n';
	delete lists;
	
	std::cout << std::endl;
    return 0;
}
