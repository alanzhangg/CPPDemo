//
//  split.hpp
//  DemoCPuse
//
//  Created by jinxin on 15/08/2017.
//  Copyright © 2017 jinxin. All rights reserved.
//

#ifndef split_hpp
#define split_hpp

#include <vector>
#include <string>
std::vector<std::string> split(const std::string& s);
std::string::size_type width(const std::vector<std::string>& v);
std::vector<std::string> frame(const std::vector<std::string>& v);

#endif /* split_hpp */
