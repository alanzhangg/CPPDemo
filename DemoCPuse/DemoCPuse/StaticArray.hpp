//
//  StaticArray.hpp
//  DemoCPuse
//
//  Created by jinxin on 15/09/2017.
//  Copyright © 2017 jinxin. All rights reserved.
//

#ifndef StaticArray_hpp
#define StaticArray_hpp

#include <iostream>

template <class T, int size>
class StaticArray {
private:
	T m_array[size];
	
public:
	T* getArray();
	T& operator[](int index){
		return m_array[index];
	}
};

template <class T, int size>
T* StaticArray<T, size>::getArray(){
	return m_array;
}

template <typename T, int size>
void print(StaticArray<T, size> &array){
	for (int count = 0; count < size; ++count)
		std::cout << array[count] << ' ';
}

template <int size>
void print(StaticArray<char, size> &array) {
	for (int count = 0; count < size; ++count)
		std::cout << array[count];
}

#endif /* StaticArray_hpp */
