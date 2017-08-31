//
//  split.cpp
//  DemoCPuse
//
//  Created by jinxin on 15/08/2017.
//  Copyright © 2017 jinxin. All rights reserved.
//

#include "split.hpp"

using namespace std;

vector<string> split(const string& s){
	vector<string> ret;
	typedef string::size_type string_size;
	string_size i = 0;
	
	while (i != s.size()) {
		while (i != s.size() && isspace(s[i])) {
			++i;
		}
		string_size j = i;
		while (j != s.size() && !isspace(s[j])) {
			j++;
		}
		if (i != j) {
			ret.push_back(s.substr(i, j - i));
			i = j;
		}
	}
	return ret;
}

string::size_type width(const vector<string>& v){
	string::size_type maxlen = 0;
	for (vector<string>::size_type i = 0; i != v.size(); ++i) {
		maxlen = max(maxlen, v[i].size());
	}
	return maxlen;
}


