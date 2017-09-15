//
//  ArrayTem.hpp
//  DemoCPuse
//
//  Created by jinxin on 15/09/2017.
//  Copyright © 2017 jinxin. All rights reserved.
//

#ifndef ArrayTem_hpp
#define ArrayTem_hpp

#include <assert.h>

template <class T>
class ArrayTem{
private:
	int m_length;
	T * m_data;
public:
	ArrayTem(){
		m_length = 0;
		m_data = nullptr;
	}
	ArrayTem(int length){
		m_data = new T(length);
		m_length = length;
	}
	~ArrayTem(){
		delete []m_data;
	}
	void Erase(){
		delete [] m_data;
		m_data = nullptr;
		m_length = 0;
	}
	T& operator[](int index){
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}
	int getLength();
};

template <typename T>
int ArrayTem<T>::getLength() {
	return m_length;
}

#endif /* ArrayTem_hpp */
