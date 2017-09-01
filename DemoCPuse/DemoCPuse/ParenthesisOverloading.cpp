//
//  ParenthesisOverloading.cpp
//  DemoCPuse
//
//  Created by jinxin on 01/09/2017.
//  Copyright © 2017 jinxin. All rights reserved.
//

#include "ParenthesisOverloading.hpp"

double& Matrix::operator()(int row, int col){
	assert(col >= 0 && col < 4);
	assert(row >= 0 && row < 4);
	return data[row][col];
}

const double& Matrix::operator()(int row, int col) const{
	assert(col >= 0 && col < 4);
	assert(row >= 0 && row < 4);
	return data[row][col];
}

void Matrix::operator()(){
	for (int row=0; row < 4; ++row)
		for (int col=0; col < 4; ++col)
			data[row][col] = 0.0;
}


