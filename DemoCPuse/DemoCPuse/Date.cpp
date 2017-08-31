//
//  Date.cpp
//  DemoCPuse
//
//  Created by jinxin on 29/08/2017.
//  Copyright © 2017 jinxin. All rights reserved.
//

#include "Date.hpp"

Date::Date(int year, int month, int day){
	SetDate(year, month, day);
}

void Date::SetDate(int year, int month, int day){
	m_month = month;
	m_day = day;
	m_year = year;
}
