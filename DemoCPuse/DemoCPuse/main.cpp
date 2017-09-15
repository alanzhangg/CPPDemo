//
//  main.cpp
//  DemoCPuse
//
//  Created by jinxin on 2017/8/8.
//  Copyright © 2017年 jinxin. All rights reserved.
//

#include <iostream>
#include <string>
#include "Cents.hpp"
#include "ArrayTem.hpp"
#include "StaticArray.hpp"
#include "Storage.hpp"

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
	
	Storage8<int> intStorage;
	for (int count = 0; count < 8; ++count) {
		intStorage.set(count, count);
	}
	for (int count = 0; count < 8; ++count) {
		std::cout << intStorage.get(count) << '\n';
	}
	
	Storage8<bool> boolStorage;
	for (int count = 0; count < 8; ++count) {
		boolStorage.set(count, count & 3);
	}
	
	for (int count = 0 ; count < 8; ++count) {
		std::cout << (boolStorage.get(count) ? "true" : "false") << '\n';
	}
	
	StaticArray<int, 12> intstArray;
	
	for (int count = 0; count < 12; ++count) {
		intstArray[count] = count;
	}
	
	for (int count = 11; count >= 0; --count) {
		std::cout << intstArray[count] << '\n';
	}
	
	 std::cout << '\n';
	
	ArrayTem<int> intArray(12);
	ArrayTem<double> doubleArray(12);
	
	for (int count = 0; count < intArray.getLength(); ++count) {
		intArray[count] = count;
		doubleArray[count] = count + 0.5;
	}
	
	for (int count = intArray.getLength() - 1; count >= 0; --count) {
		std::cout << intArray[count] << '\t' << doubleArray[count] << '\n';
	}
	
	Cents array3[]{Cents(5), Cents(10), Cents(15), Cents(14)};
	std::cout << average(array3, 4) << '\n';
	
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
	
	using namespace std;
	cout << "Enter your age" << endl;
	int age;
	cin >> age;
	if (age <= 0)
		{
			// In this case we'll use the insertion operatior on cerr to print an error message
		cerr << "Oops, you entered an invalid age!" << endl;
		exit(1);
		}
	
		// Otherwise we'll use insertion again on cout to print a result
	cout << "You entered " << age << " years old" << endl;
	return 0;
}


