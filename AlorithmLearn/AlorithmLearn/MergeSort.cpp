//
//  MergeSort.cpp
//  AlorithmLearn
//
//  Created by zhangalan on 12/11/2017.
//  Copyright © 2017 zhangalan. All rights reserved.
//

#include "MergeSort.hpp"
#include "CommonFunc.hpp"

void Merge::merge(std::vector<int> &a, int lo, int mid, int hi){
    int i = lo, j = mid + 1;
    std::cout << lo << " & " << mid << " & " << hi << '\n';
//    show(aux);
    for (int k = lo; k <= hi; k++) {
        aux[k] = a[k];
    }
    for (int k = lo; k <= hi; k++) {
        if (i > mid) a[k] = aux[j++];
        else if (j > hi) a[k] = aux[i++];
        else if (aux[j] < aux[i]) a[k] = aux[j++];
        else a[k] = aux[i++];
    }
    show(a);
}

void Merge::sort(vector<int> &a, int lo, int hi){
    if (hi <= lo) return;
    int mid = lo + (hi - lo) / 2;
    sort(a, lo, mid);
    sort(a, mid + 1, hi);
    merge(a, lo, mid, hi);
}

void Merge::diSort(vector<int> &a){
    for (int i = 0; i < a.size(); i++) {
        aux.insert(aux.end(), a[i]);
    }
    int N = (int)a.size();
    for (int sz = 1; sz < N; sz += sz) {
        for (int lo = 0; lo < N - sz; lo += sz + sz) {
            merge(a, lo, lo + sz - 1, min(lo + sz + sz - 1, N - 1));
        }
    }
}

void Merge::sort(vector<int> &a){
    for (int i = 0; i < a.size(); i++) {
        aux.insert(aux.end(), a[i]);
    }
    sort(a, 0, (int)a.size() - 1);
}
