//
//  main.cpp
//  AlorithmLearn
//
//  Created by zhangalan on 05/11/2017.
//  Copyright © 2017 zhangalan. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Algorithm.hpp"
#include "CommonFunc.hpp"
#include "MergeSort.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::vector<int> sor{4, 5, 2, 1, 3, 6, 12, 1, 8, 10, 9, 30, 20, 11};
    std::vector<int> sor_{1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
//    selectSort(sor);
//    insertionSort(sor);
//    shellSort(sor);
//    int high = (int)sor.size() - 1;
//    mergeSort(sor, 0, high);
//    Merge m = Merge();
//    m.sort(sor);
//    m.diSort(sor);
//    quickSort(sor);
    //堆排序，从1开始。0会有问题
    sor.insert(sor.begin(), 0);
    heapSort(sor);
    show(sor);
    std::cout << "Hello, World!\n";
    return 0;
}
