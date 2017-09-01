//
//  TypecastsOverloading.hpp
//  DemoCPuse
//
//  Created by jinxin on 01/09/2017.
//  Copyright © 2017 jinxin. All rights reserved.
//

#ifndef TypecastsOverloading_hpp
#define TypecastsOverloading_hpp

class Cents{
private:
	int m_cents;
public:
	Cents(int cents = 0){
		m_cents = cents;
	}
	operator int() {return m_cents;}
	int getCents() {return m_cents;}
	void setCents(int cents) {m_cents = cents;}
};

#endif /* TypecastsOverloading_hpp */
