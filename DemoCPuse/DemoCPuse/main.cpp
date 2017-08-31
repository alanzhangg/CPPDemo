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
    return 0;
}
