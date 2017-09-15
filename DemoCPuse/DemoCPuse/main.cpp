//
//  main.cpp
//  DemoCPuse
//
//  Created by jinxin on 2017/8/8.
//  Copyright © 2017年 jinxin. All rights reserved.
//

#include <iostream>
#include <string>

template <typename T>
const T& maxs(const T& x, const T& y){
	return (x > y) ? x : y;
}

template <class T>
T average(T * array, int length){
	T sum = 0;
	for (int count = 0; count < length; ++count) {
		sum += array[count];
	}
	sum /= length;
	return sum;
}

class Base{
public:
	virtual const char* getName() {return "Base";}
};

class Derives: public Base{
	virtual const char* getName() {return "Derived";}
};

int main() {
	
	int array1[]{5, 2, 1, 4, 3};
	std::cout << average(array1, 5) << '\n';
	
	double array2[]{3.12, 3.45, 9.23, 6.34};
	std::cout << average(array2, 4) << '\n';
	
	int i = maxs(3, 7);
	std::cout << i << '\n';
	
	double d = maxs(6.34, 18.523);
	std::cout << d << '\n';
	
	char ch = maxs('a', '6');
	std::cout << ch << '\n';
	
	Derives derived;
	Base &base = derived;
	std::cout << "Base is a" << base.getName() << '\n';
	
	return 0;
}


