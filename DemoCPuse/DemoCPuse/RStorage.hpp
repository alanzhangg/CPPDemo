//
//  RStorage.hpp
//  DemoCPuse
//
//  Created by jinxin on 15/09/2017.
//  Copyright © 2017 jinxin. All rights reserved.
//

#ifndef RStorage_hpp
#define RStorage_hpp

#include <iostream>
#include <cstring>

template <class T>
class Storage
{
private:
	T m_value;
public:
	Storage(T value)
	{
	m_value = value;
	}
	
	~Storage()
	{
	}
	
	void print()
	{
	std::cout << m_value << '\n';
	}
};

template <class T>
class Storage<T*> {
private:
	T* m_value;
public:
	Storage(T* value){
		m_value = new T(*value);
	}
	~Storage(){
		delete m_value;
	}
	void print(){
		std::cout << *m_value << '\n';
	}
};

template <>
Storage<char *>::Storage(char * value) {
	int length = 0;
	while (value[length] != '\0')
		++length;
	++length; // +1 to account for null terminator
	
		// Allocate memory to hold the value string
	m_value = new char[length];
	
		// Copy the actual value string into the m_value memory we just allocated
	for (int count = 0; count < length; ++count)
		m_value[count] = value[count];
}

template<>
Storage<char*>::~Storage()
{
	delete[] m_value;
}


template<>
void Storage<char*>::print()
{
	std::cout << m_value;
}

#endif /* RStorage_hpp */
