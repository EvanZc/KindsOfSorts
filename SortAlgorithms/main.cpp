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
#include "QuickSort.h"
#include "TestSortResult.h"

int main(int argc, const char * argv[]) {
    std::vector<std::vector<int> > vec = GetFixLenVecIntVecWithValueInSpecRange(1, 1000000, 0, 10000000);
    
    QuickSortStandard(vec[0]);
    
    if (!IsVecIntAscendingOrder(vec[0])) {
        std::cout<<"oops"<<std::endl;
    }
    
    return 0;
}
