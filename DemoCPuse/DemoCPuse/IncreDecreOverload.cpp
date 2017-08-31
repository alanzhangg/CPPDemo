//
//  IncreDecreOverload.cpp
//  DemoCPuse
//
//  Created by zhangalan on 31/08/2017.
//  Copyright © 2017 jinxin. All rights reserved.
//

#include "IncreDecreOverload.hpp"

Digit& Digit::operator++(){
    if (m_digit == 9) {
        m_digit = 0;
    }else{
        ++m_digit;
    }
    return *this;
}

Digit& Digit::operator--(){
    if (m_digit == 0) {
        m_digit = 9;
    }else
        --m_digit;
    return *this;
}

Digit Digit::operator++(int){
    Digit temp(m_digit);
    ++(*this);
    return temp;
}

Digit Digit::operator--(int){
    Digit temp(m_digit);
    --(*this);
    return temp;
}

std::ostream& operator<< (std::ostream &out, const Digit &d){
    out << d.m_digit;
    return out;
}

