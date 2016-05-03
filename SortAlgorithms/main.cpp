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
    
    int loop_time = 1;
    
    long long time1;
    long long time2;
    
    long long time_total_arr[4] = {0};
    
    while (loop_time--) {
        
        std::vector<std::vector<int> > vec = GetFixLenVecIntVecWithValueInSpecRange(1, 10000000, 0, 10000000);
        
        time1 = GetNowNanoSecond().count();
        QuickSortStandard(vec[0]);
        time2 = GetNowNanoSecond().count();
        time_total_arr[0] += time2 - time1;
        
        if (!IsVecIntAscendingOrder(vec[0])) {
            std::cout<<"oops quick sort"<<std::endl;
        }
        
        std::vector<int> vec_bubble(vec[0]);
        std::vector<int> vec_insert(vec[0]);
        std::vector<int> vec_dcSort(vec[0]);
        
        time1 = GetNowNanoSecond().count();
        //BubbleSort(vec_bubble);
        DivideAndConquerSortB(vec_insert);
        time2 = GetNowNanoSecond().count();
        time_total_arr[1] += time2 - time1;
        
        if (!IsVecIntAscendingOrder(vec_bubble)) {
            std::cout<<"oops bubble sort"<<std::endl;
        }
        
        time1 = GetNowNanoSecond().count();
        InsertSort(vec_insert);
        time2 = GetNowNanoSecond().count();
        time_total_arr[2] += time2 - time1;
        
        if (!IsVecIntAscendingOrder(vec_insert)) {
            std::cout<<"oops insert sort"<<std::endl;
        }
        
        time1 = GetNowNanoSecond().count();
        DivideAndConquerSort(vec_dcSort);
        time2 = GetNowNanoSecond().count();
        time_total_arr[3] += time2 - time1;
        
        if (!IsVecIntAscendingOrder(vec_dcSort)) {
            std::cout<<"oops divide and conquer sort"<<std::endl;
        }
        
    }
    std::cout<<time_total_arr[0]<<std::endl;
    std::cout<<time_total_arr[1]<<std::endl;
    std::cout<<time_total_arr[2]<<std::endl;
    std::cout<<time_total_arr[3]<<std::endl;
    
    return 0;
}
