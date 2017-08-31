//
//  grade.hpp
//  DemoCPuse
//
//  Created by jinxin on 2017/8/10.
//  Copyright © 2017年 jinxin. All rights reserved.
//

#ifndef grade_hpp
#define grade_hpp

#include <vector> 
#include "Student_info.hpp"
double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);
void doSomething(int);

#endif /* grade_hpp */
