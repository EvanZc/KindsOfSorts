//
//  QuickSort.h
//  SortAlgorithms
//
//  Created by 曾诚 on 16-4-29.
//  Copyright (c) 2016年 曾诚. All rights reserved.
//

#ifndef __SortAlgorithms__QuickSort__
#define __SortAlgorithms__QuickSort__

#include <stdio.h>
#include <iostream>
#include <vector>

void QuickSortStandard(std::vector<int>& be_sorted_vec);
void QuickSortStandard(std::vector<int>&,const unsigned long idx_start,const unsigned long idx_end);
unsigned long QuickSortStandardPickPivot(std::vector<int>& be_sorted_vec, unsigned long idx_begin, unsigned long idx_end);

#endif /* defined(__SortAlgorithms__QuickSort__) */
