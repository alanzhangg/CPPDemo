//
//  SubscripOverloading.cpp
//  DemoCPuse
//
//  Created by zhangalan on 31/08/2017.
//  Copyright © 2017 jinxin. All rights reserved.
//

#include "SubscripOverloading.hpp"

int& IntList::operator[](const int index){
	return m_list[index];
}

const int& IntList::operator[](const int index) const{
	return m_list[index];
}
