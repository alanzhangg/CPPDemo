//
//  IncreDecreOverload.hpp
//  DemoCPuse
//
//  Created by zhangalan on 31/08/2017.
//  Copyright © 2017 jinxin. All rights reserved.
//

#ifndef IncreDecreOverload_hpp
#define IncreDecreOverload_hpp

#include <iostream>

class Digit{
private:
    int m_digit;
public:
    Digit(int digit = 0) : m_digit(digit){
    }
    
    Digit& operator++(); //prefix
    Digit& operator--(); //prefix
    
    Digit operator++(int); //postfix
    Digit operator--(int); //postfix
    
    friend std::ostream& operator<< (std::ostream &out, const Digit &d);
};

#endif /* IncreDecreOverload_hpp */
