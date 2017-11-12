//
//  MergeSort.hpp
//  AlorithmLearn
//
//  Created by zhangalan on 12/11/2017.
//  Copyright © 2017 zhangalan. All rights reserved.
//

#ifndef MergeSort_hpp
#define MergeSort_hpp

#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
class Merge{
private:
    vector<int> aux{};
    void sort(vector<int> &a, int lo, int hi);
    void merge(std::vector<int> &a, int lo, int mid, int hi);
public:
    void sort(vector<int> &a);
    //自底向上
    void diSort(vector<int> &a);
};

#endif /* MergeSort_hpp */
