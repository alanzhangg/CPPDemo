//
//  CommonFunc.cpp
//  AlorithmLearn
//
//  Created by zhangalan on 05/11/2017.
//  Copyright © 2017 zhangalan. All rights reserved.
//

#include "CommonFunc.hpp"

bool less(int v, int w){
    return v < w;
}

void exch(std::vector<int> &a, int i, int j){
    int t = a[i];
    a[i] = a[j];
    a[j] = t;
}

void show(std::vector<int> a){
    for (int i = 0; i < a.size(); i++) {
        std::cout << a[i] << " ";
    }
    std::cout << '\n';
}

bool isSorted(std::vector<int> a){
    for (int i = 0; i < a.size(); i++) {
        if (less(a[i], a[i - 1])) {
            return false;
        }
    }
    return true;
}




