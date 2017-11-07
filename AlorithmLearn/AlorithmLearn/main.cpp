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

int main(int argc, const char * argv[]) {
    // insert code here...
    std::vector<int> sor{4, 5, 2, 1, 3, 6, 12, 1, 8, 10, 9, 30, 20, 11};
//    selectSort(sor);
//    insertionSort(sor);
    shellSort(sor);
    show(sor);
    std::cout << "Hello, World!\n";
    return 0;
}
