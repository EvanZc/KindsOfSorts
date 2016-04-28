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

void QuickSortStandard(std::vector<int>&);

int QuickSortStandardPickPivot(std::vector<int>& be_sorted_vec, int idx_begin, int idx_end);

#endif /* defined(__SortAlgorithms__QuickSort__) */
