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

}