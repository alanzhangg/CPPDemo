//
//  SubscripOverloading.hpp
//  DemoCPuse
//
//  Created by zhangalan on 31/08/2017.
//  Copyright © 2017 jinxin. All rights reserved.
//

#ifndef SubscripOverloading_hpp
#define SubscripOverloading_hpp

class IntList{
private:
	int m_list[10] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
public:
	int& operator[](const int index);
	const int& operator[](const int index) const;
};

#endif /* SubscripOverloading_hpp */
