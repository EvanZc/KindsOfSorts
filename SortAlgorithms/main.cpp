//
//  main.cpp
//  SortAlgorithms
//
//  Created by 曾诚 on 16-4-24.
//  Copyright (c) 2016年 曾诚. All rights reserved.
//

#include <iostream>
#include <vector>
#include "FileOperation.h"
#include "ToolFunctions.h"
#include "Sort.h"
#include "TestSortResult.h"

int main(int argc, const char * argv[]) {
    
    int loop_time = 1000;
    
    while (loop_time--) {
        std::vector<std::vector<int> > vec = GetFixLenVecIntVecWithValueInSpecRange(1, 1000, 0, 10000000);
        
        QuickSortStandard(vec[0]);
        
        if (!IsVecIntAscendingOrder(vec[0])) {
            std::cout<<"oops quick sort"<<std::endl;
        }
        
        std::vector<int> vec_bubble(vec[0]);
        std::vector<int> vec_insert(vec[0]);
        
        BubbleSort(vec_bubble);
        
        if (!IsVecIntAscendingOrder(vec_bubble)) {
            std::cout<<"oops bubble sort"<<std::endl;
        }
        
        InsertSort(vec_insert);
        
        if (!IsVecIntAscendingOrder(vec_insert)) {
            std::cout<<"oops insert sort"<<std::endl;
        }
    }
    
    std::cout<<"yes ok!"<<std::endl;
    
    return 0;
}
