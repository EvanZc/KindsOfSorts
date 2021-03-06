//
//  QuickSort.cpp
//  SortAlgorithms
//
//  Created by 曾诚 on 16-4-29.
//  Copyright (c) 2016年 曾诚. All rights reserved.
//

#include "Sort.h"
#include "QuickSort.h"
#include "ToolFunctions.h"
#include "ReturnValue.h"

void QuickSortStandard(std::vector<int>& be_sorted_vec)
{
    QuickSortStandard(be_sorted_vec, 0, be_sorted_vec.size() - 1);
}

void QuickSortStandard(std::vector<int>& be_sorted_vec, const unsigned long idx_start, const unsigned long idx_end)
{
    if (be_sorted_vec.size() < 1) {
        std::cout<<"This is an empty vec. "<<__FUNCTION__<<std::endl;
        
        return;
    }
    
    if ((idx_start > idx_end) || (idx_end >= be_sorted_vec.size())) {
        std::cout<<"Vec size is "<<be_sorted_vec.size()<<", start index is "<<idx_start;
        std::cout<<", end index is "<<idx_end<<std::endl;
        
        return;
    }
    
    if (idx_start == idx_end) {
        return;
    }
    
    //pick up the pivot
    unsigned long idx_part = QuickSortStandardPickPivot(be_sorted_vec, idx_start, idx_end);
    
    //sort left
    QuickSortStandard(be_sorted_vec, idx_start, idx_part - 1);
    //sort right
    QuickSortStandard(be_sorted_vec, idx_part, idx_end);
}

unsigned long QuickSortStandardPickPivot(std::vector<int>& be_sorted_vec,unsigned long idx_begin,unsigned long idx_end)
{
    unsigned long begin_pivot = idx_begin++;
    int temp_int;
    
    while (idx_begin < idx_end) {
        if (be_sorted_vec[idx_begin] <= be_sorted_vec[begin_pivot]) {
            idx_begin++;
            continue;
        }
        if (be_sorted_vec[idx_end] > be_sorted_vec[begin_pivot]) {
            idx_end--;
            continue;
        }
        
        temp_int = be_sorted_vec[idx_begin];
        be_sorted_vec[idx_begin] = be_sorted_vec[idx_end];
        be_sorted_vec[idx_end] = temp_int;
        
    }
    
    if (be_sorted_vec[begin_pivot] > be_sorted_vec[idx_end]) {
        temp_int = be_sorted_vec[begin_pivot];
        be_sorted_vec[begin_pivot] = be_sorted_vec[idx_end];
        be_sorted_vec[idx_end] = temp_int;
    }
    
    
    return idx_end;
}

//choose start as pivot is much more faster than random but middle is faster than simple in
//most cases.

void QuickSortStandardB(std::vector<int>& be_sorted_vec)
{
    QuickSortStandardB(be_sorted_vec, 0, be_sorted_vec.size() - 1);
}

void QuickSortStandardB(std::vector<int>& be_sorted_vec, const unsigned long idx_start, const unsigned long idx_end)
{
    if (be_sorted_vec.size() < 1) {
        std::cout<<"This is an empty vec. "<<__FUNCTION__<<std::endl;
        
        return;
    }
    
    if ((idx_start > idx_end) || (idx_end >= be_sorted_vec.size())) {
        std::cout<<"Vec size is "<<be_sorted_vec.size()<<", start index is "<<idx_start;
        std::cout<<", end index is "<<idx_end<<std::endl;
        
        return;
    }
    
    if (idx_start == idx_end) {
        return;
    }
    
    //pick up the pivot
    unsigned long idx_part = QuickSortStandardPickPivotB(be_sorted_vec, idx_start, idx_end);
    
    //sort left
    QuickSortStandardB(be_sorted_vec, idx_start, idx_part - 1);
    //sort right
    QuickSortStandardB(be_sorted_vec, idx_part, idx_end);
}

unsigned long QuickSortStandardPickPivotB(std::vector<int>& be_sorted_vec,unsigned long idx_begin,unsigned long idx_end)
{
    int temp_int;
    //might be cut
    //unsigned long begin_pivot = (int)GetAnUnsignedNumFromSpecRange((int)idx_begin, (int)idx_end);
    //unsigned long begin_pivot = idx_begin++;
    unsigned long begin_pivot = (idx_end - idx_begin) / 2 + idx_begin;
    int           begin_pivot_value = be_sorted_vec[begin_pivot];
    unsigned long idx_begin_save = idx_begin;
    
    temp_int = be_sorted_vec[idx_begin];
    be_sorted_vec[idx_begin] = begin_pivot_value;
    be_sorted_vec[begin_pivot] = temp_int;
    
    idx_begin++;
    
    while (idx_begin < idx_end) {
        if (be_sorted_vec[idx_begin] <= begin_pivot_value) {
            idx_begin++;
            continue;
        }
        if (be_sorted_vec[idx_end] > begin_pivot_value) {
            idx_end--;
            continue;
        }
        
        temp_int = be_sorted_vec[idx_begin];
        be_sorted_vec[idx_begin] = be_sorted_vec[idx_end];
        be_sorted_vec[idx_end] = temp_int;
        
    }
    
    if (begin_pivot_value > be_sorted_vec[idx_end]) {
        temp_int = begin_pivot_value;
        be_sorted_vec[idx_begin_save] = be_sorted_vec[idx_end];
        be_sorted_vec[idx_end] = temp_int;
    }
    
    
    return idx_end;
}

void QuickSortStandardC(std::vector<int>& be_sorted_vec)
{
    QuickSortStandardC(be_sorted_vec, 0, be_sorted_vec.size() - 1);
}

void QuickSortStandardC(std::vector<int>& be_sorted_vec, const unsigned long idx_start, const unsigned long idx_end)
{
    if (be_sorted_vec.size() < 1) {
        std::cout<<"This is an empty vec. "<<__FUNCTION__<<std::endl;
        
        return;
    }
    
    if ((idx_start > idx_end) || (idx_end >= be_sorted_vec.size())) {
        std::cout<<"Vec size is "<<be_sorted_vec.size()<<", start index is "<<idx_start;
        std::cout<<", end index is "<<idx_end<<std::endl;
        
        return;
    }
    
    if (idx_start == idx_end) {
        return;
    }
    
    //pick up the pivot
    unsigned long idx_part = QuickSortStandardPickPivotB(be_sorted_vec, idx_start, idx_end);
    
    //sort left
    if (idx_end - idx_start <= 32) {
        InsertSortPart(be_sorted_vec, idx_start, idx_end);
        return;
    }
    QuickSortStandardC(be_sorted_vec, idx_start, idx_part - 1);
    //sort right
    QuickSortStandardC(be_sorted_vec, idx_part, idx_end);
}