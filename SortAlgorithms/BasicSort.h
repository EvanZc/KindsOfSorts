//
//  BasicSort.h
//  SortAlgorithms
//
//  Created by 曾诚 on 16-4-30.
//  Copyright (c) 2016年 曾诚. All rights reserved.
//

#ifndef __SortAlgorithms__BasicSort__
#define __SortAlgorithms__BasicSort__

#include <iostream>
#include <vector>

//ascending order
void BubbleSort(std::vector<int>&);

//ascending order
void InsertSort(std::vector<int>&);

//ascending order
void InsertSortPart(std::vector<int>& sort_vec, unsigned long idx_begin, unsigned long idx_end);

//ascending order
void DivideAndConquerSort(std::vector<int>& sort_vec);

//make an aux sort which can save the time to create small vector
void DivideAndConquerSortB(std::vector<int>& sort_vec);
//Divide and Conquer Sort;


#endif /* defined(__SortAlgorithms__BasicSort__) */
