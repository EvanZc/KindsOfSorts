//
//  QuickSort.cpp
//  SortAlgorithms
//
//  Created by 曾诚 on 16-4-29.
//  Copyright (c) 2016年 曾诚. All rights reserved.
//

#include "QuickSort.h"

void QuickSortStandard(std::vector<int>& be_sorted_vec)
{
    if (be_sorted_vec.size() <= 1) {
        return;
    }
    //pick up the pivot
    
    
    //sort left
    //sort right
}

int QuickSortStandardPickPivot(std::vector<int>& be_sorted_vec, int idx_begin, int idx_end)
{
    if ((idx_begin < 0) || (idx_end < 0) || (idx_begin < idx_end)) {
        std::cout<<"Parameters error idx_begin is "<<idx_begin<<", idx_end is "<<idx_end<<std::endl;
        return -1;
    }
    
    if (idx_begin == idx_end) {
        return idx_begin;
    }
    
    int pivot = be_sorted_vec[idx_begin];
    int temp_int;
    
    while (idx_begin < idx_end) {
        while (be_sorted_vec[idx_begin] <= pivot) {
            idx_begin++;
        }
        while (be_sorted_vec[idx_end] > pivot) {
            idx_end--;
        }
        
        temp_int = be_sorted_vec[idx_begin];
        be_sorted_vec[idx_begin] = be_sorted_vec[idx_end];
        be_sorted_vec[idx_end] = temp_int;
        
    }
    
    int idx_pivot = idx_begin;
    
    return idx_pivot;
}