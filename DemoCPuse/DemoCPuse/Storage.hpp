//
//  Storage.hpp
//  DemoCPuse
//
//  Created by jinxin on 15/09/2017.
//  Copyright © 2017 jinxin. All rights reserved.
//

#ifndef Storage_hpp
#define Storage_hpp

template<class T>
class Storage8{
private:
	T m_array[8];
public:
	void set(int index, const T &value){
		m_array[index] = value;
	}
	const T& get(int index){
		return m_array[index];
	}
};

template <>
class Storage8<bool> {
private:
	unsigned char m_data;
public:
	Storage8():m_data(8){}
	void set(int index, bool value);
	bool get(int index);
};

#endif /* Storage_hpp */
