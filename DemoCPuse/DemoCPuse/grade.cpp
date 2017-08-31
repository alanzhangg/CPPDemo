//
//  grade.cpp
//  DemoCPuse
//
//  Created by jinxin on 2017/8/10.
//  Copyright © 2017年 jinxin. All rights reserved.
//

#include "grade.hpp"
#include <stdexcept> 
#include <vector>
#include "median.hpp"
//#include "Student_info.hpp"

using namespace std;

double grade(double midterm, double finall, double homework){
	return 0.2 * midterm + 0.4 * finall + 0.4 * homework;
}

double grade(double midterm, double finall, const vector<double>& hw){
	if(hw.size() == 0){
		throw domain_error("student has done no homework");
	}
	return grade(midterm, finall, median(hw));
}

double grade(const Student_info& s){
	return grade(s.midterm, s.finall, s.homework);
}

void doSomething(int x){
	cout << x * 2;
}


