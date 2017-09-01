//
//  ParenthesisOverloading.hpp
//  DemoCPuse
//
//  Created by jinxin on 01/09/2017.
//  Copyright © 2017 jinxin. All rights reserved.
//

#ifndef ParenthesisOverloading_hpp
#define ParenthesisOverloading_hpp

#include <cassert>

class Matrix{
private:
	double data[4][4];
public:
	Matrix(int in){
		for (int row = 0; row < 4; ++row) {
			for (int col = 0; col < 4; ++col) {
				data[row][col] = 0.0;
			}
		}
	}
	double& operator() (int row, int col);
	const double& operator() (int row, int col) const;
	void operator()();
};

#endif /* ParenthesisOverloading_hpp */
