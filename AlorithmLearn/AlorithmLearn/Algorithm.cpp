//
//  Algorithm.cpp
//  AlorithmLearn
//
//  Created by zhangalan on 05/11/2017.
//  Copyright © 2017 zhangalan. All rights reserved.
//

#include "Algorithm.hpp"
#include "CommonFunc.hpp"

int partition(std::vector<int> &a, int lo, int hi){
    int i = lo, j = hi + 1;
    int v = a[lo];
    while (true) {
        while (lesss(a[++i], v)) {
            if (i == hi) {
                break;
            }
        }
        while (lesss(v, a[--j])) {
            if (j == lo) {
                break;
            }
        }
        if (i >= j) {
            break;
        }
        exch(a, i, j);
    }
    exch(a, lo, j);
    return j;
}

void insertionSort(std::vector<int> &a, int lo, int hi){
//    unsigned long n = a.size();
    for (int i = lo; i <= hi; i++) {
        for (int j = i; j > lo; j--) {
            if (lesss(a[j], a[j - 1])) {
                exch(a, j, j-1);
            }
        }
    }
}

void quickSort(std::vector<int> &a, int lo, int hi){
    if (hi <= lo + 5) {insertionSort(a, lo, hi); return;};
    int j = partition(a, lo, hi);
    quickSort(a, lo, j - 1);
    quickSort(a, j + 1, hi);
}

void quickSort(std::vector<int> &a){
    quickSort(a, 0, (int)a.size() - 1);
}

//归并排序
void merge(std::vector<int> &a, int lo, int mid, int hi){
    int i = lo, j = mid + 1;
    std::vector<int> aux{};
    for (int k = 0; k < a.size(); k++) {
        aux.insert(aux.end(), a[k]);
    }
    show(aux);
    std::cout << lo << " & " << mid << " & " << hi << '\n';
    for (int k = lo; k <= hi; k++) {
        if (i > mid) a[k] = aux[j++];
        else if (j > hi) a[k] = aux[i++];
        else if (lesss(aux[j], aux[i])) a[k] = aux[j++];
        else a[k] = aux[i++];
    }
}

void mergeSort(std::vector<int> &a, int lo, int hi){
    if (hi <= lo) return;
    int mid = lo + (hi - lo) / 2;
    mergeSort(a, lo, mid);
    mergeSort(a, mid + 1, hi);
    merge(a, lo, mid, hi);
}

void shellSort(std::vector<int> &a){
    unsigned long n = a.size();
    int h = 1;
    while (h < n / 3) {
        h = h * 3 + 1;
    }
    while (h >= 1) {
        for (int i = h; i < n; i++) {
            for (int j = i; j >= h; j -= h) {
                if (lesss(a[j], a[j - h])) {
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
            if (lesss(a[j], a[j - 1])) {
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
            if (lesss(a[j], a[min])) {
                min = j;
            }
        }
        exch(a, i, min);
    }
}


