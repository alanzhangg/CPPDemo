//
//  Date.hpp
//  DemoCPuse
//
//  Created by jinxin on 29/08/2017.
//  Copyright © 2017 jinxin. All rights reserved.
//

#ifndef Date_hpp
#define Date_hpp

class Date{
private:
	int m_year;
	int m_month;
	int m_day;
	
public:
	Date(int year, int month, int day);
	void SetDate(int year, int month, int day);
	
	int getYear(){return m_year;}
	int getMonth(){return m_month;}
	int getDay(){return m_day;}
};

#endif /* Date_hpp */
