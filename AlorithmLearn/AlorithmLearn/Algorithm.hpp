//
//  Algorithm.hpp
//  AlorithmLearn
//
//  Created by zhangalan on 05/11/2017.
//  Copyright © 2017 zhangalan. All rights reserved.
//

#ifndef Algorithm_hpp
#define Algorithm_hpp

#include <stdio.h>
#include <vector>

void selectSort(std::vector<int> &a);
void insertionSort(std::vector<int> &a);
void shellSort(std::vector<int> &a);
void mergeSort(std::vector<int> &a, int lo, int hi);
void merge(std::vector<int> &a, int lo, int mid, int hi);
void quickSort(std::vector<int> &a);

#endif /* Algorithm_hpp */
