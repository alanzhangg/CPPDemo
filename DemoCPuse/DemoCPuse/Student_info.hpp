//
//  Student_info.hpp
//  DemoCPuse
//
//  Created by jinxin on 2017/8/10.
//  Copyright © 2017年 jinxin. All rights reserved.
//

#ifndef Student_info_hpp
#define Student_info_hpp

#include <iostream>
#include <string>
#include <vector>

struct Student_info {
	std::string name;
	double midterm, finall;
	std::vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);

#endif /* Student_info_hpp */
