//
//  BasicSort.cpp
//  SortAlgorithms
//
//  Created by 曾诚 on 16-4-30.
//  Copyright (c) 2016年 曾诚. All rights reserved.
//

#include "BasicSort.h"

//ascending order
void BubbleSort(std::vector<int>& sort_vec)
{
    for (unsigned long i = 0; i < sort_vec.size(); i++) {
        for (unsigned long j = i + 1; j < sort_vec.size(); j++) {
            if (sort_vec[i] > sort_vec[j]) {
                int temp_num = sort_vec[i];
                sort_vec[i] = sort_vec[j];
                sort_vec[j] = temp_num;
            }
        }
    }
}

void InsertSort(std::vector<int>& sort_vec)
{
    InsertSortPart(sort_vec, 0, sort_vec.size() - 1);
}

void InsertSortPart(std::vector<int>& sort_vec, unsigned long idx_begin, unsigned long idx_end)
{
    if ((idx_end < idx_begin) || (sort_vec.size() <= idx_end)) {
        std::cout<<"Wrong parameters, begin is "<<idx_begin<<", end is "<<idx_end<<", size is "<<sort_vec.size()<<std::endl;
        return;
    }
    
    long long j;
    for (unsigned long i = idx_begin + 1; i <= idx_end; i++) {
        for (j = i - 1 ; j >= 0; j--) {
            if (sort_vec[j] <= sort_vec[i]) {
                break;
            }
        }
        for (unsigned long start_move = i; start_move > j; start_move--) {
            sort_vec[start_move] = sort_vec[start_move - 1];
        }
        sort_vec[j + 1] = sort_vec[i];
    }
    
}

void DivideAndConquerSortAux(std::vector<int>& sort_vec, unsigned long idx_begin, unsigned long idx_end)
{
    
}


void DivideAndConquerSort(std::vector<int>& sort_vec)
{
    if (sort_vec.size() <= 1) {
        return;
    }
    unsigned long idx_mid = sort_vec.size() / 2;
    //divide1
    std::vector<int> vec_front(sort_vec.begin(), sort_vec.begin() + idx_mid);
    DivideAndConquerSort(vec_front);
    //divide2
    std::vector<int> vec_back(sort_vec.begin() + idx_mid, sort_vec.end());
    DivideAndConquerSort(vec_back);
    //conquer
    std::vector<int>::iterator iter_front = vec_front.begin();
    std::vector<int>::iterator iter_back  = vec_back.begin();
    for (std::vector<int>::iterator iter = sort_vec.begin(); iter < sort_vec.end(); iter++) {
        if ((iter_front != vec_front.end()) && (iter_back != vec_back.end())) {
            if (*iter_front <= *iter_back) {
                *iter = *iter_front;
                iter_front++;
            }
            else{
                *iter = *iter_back;
                iter_back++;
            }
            continue;
        }
        if (iter_front == vec_front.end() && iter_back != vec_back.end()) {
            *iter = *iter_back;
            iter_back++;
            continue;
        }
        if (iter_back == vec_back.end() && iter_front != vec_front.end()) {
            *iter = *iter_front;
            iter_front++;
            continue;
        }
    }
}


