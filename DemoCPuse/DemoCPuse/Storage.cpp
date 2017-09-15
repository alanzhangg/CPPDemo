//
//  Storage.cpp
//  DemoCPuse
//
//  Created by jinxin on 15/09/2017.
//  Copyright © 2017 jinxin. All rights reserved.
//

#include "Storage.hpp"

void Storage8<bool>::set(int index, bool value){
	unsigned char mask = 1 << index;
	if (value) {
		m_data |= mask;
	}else{
		m_data &= ~mask;
	}
}

bool Storage8<bool>::get(int index){
	unsigned char mask = 1 << index;
	return (m_data & mask) != 0;
}

