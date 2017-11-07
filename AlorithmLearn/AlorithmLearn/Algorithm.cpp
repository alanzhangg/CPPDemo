//
//  Algorithm.cpp
//  AlorithmLearn
//
//  Created by zhangalan on 05/11/2017.
//  Copyright © 2017 zhangalan. All rights reserved.
//

#include "Algorithm.hpp"
#include "CommonFunc.hpp"

void shellSort(std::vector<int> &a){
    unsigned long n = a.size();
    int h = 1;
    while (h < n / 3) {
        h = h * 3 + 1;
    }
    while (h >= 1) {
        for (int i = h; i < n; i++) {
            for (int j = i; j >= h; j -= h) {
                if (less(a[j], a[j - h])) {
                    exch(a, j, j - h);
                }
            }
        }
        h /= 3;
    }
}

void insertionSort(std::vector<int> &a){
    unsigned long n = a.size();
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if (less(a[j], a[j - 1])) {
                exch(a, j, j-1);
            }
        }
    }
}

void selectSort(std::vector<int> &a){
    unsigned long n = a.size();
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (less(a[j], a[min])) {
                min = j;
            }
        }
        exch(a, i, min);
    }
}


