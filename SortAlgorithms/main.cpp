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
    
    long long time_total_arr[5] = {0};
    
    while (loop_time--) {
        
        std::vector<std::vector<int> > vec = GetFixLenVecIntVecWithValueInSpecRange(1, 10000, 0, 10000000);
        
        std::vector<int> vec_dcBsort(vec[0]);
        std::vector<int> vec_insert(vec[0]);
        std::vector<int> vec_dcSort(vec[0]);
        std::vector<int> vec_quick_sort_b(vec[0]);
        
        time1 = GetNowNanoSecond().count();
        QuickSortStandard(vec[0]);
        time2 = GetNowNanoSecond().count();
        time_total_arr[0] += time2 - time1;
        
        if (!IsVecIntAscendingOrder(vec[0])) {
            std::cout<<"oops quick sort"<<std::endl;
        }
        
        time1 = GetNowNanoSecond().count();
        DivideAndConquerSortB(vec_dcBsort);
        time2 = GetNowNanoSecond().count();
        time_total_arr[1] += time2 - time1;
        
        if (!IsVecIntAscendingOrder(vec_dcBsort)) {
            std::cout<<"oops divide and conquer B sort"<<std::endl;
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
        
        time1 = GetNowNanoSecond().count();
        QuickSortStandardB(vec_quick_sort_b);
        time2 = GetNowNanoSecond().count();
        time_total_arr[4] += time2 - time1;
        
        if (!IsVecIntAscendingOrder(vec_dcSort)) {
            std::cout<<"oops quick sort b"<<std::endl;
        }
        
    }
    std::cout<<time_total_arr[0]<<" quick sort simple"<<std::endl;
    std::cout<<time_total_arr[1]<<" divide & conquer sort B"<<std::endl;
    std::cout<<time_total_arr[2]<<" insert sort"<<std::endl;
    std::cout<<time_total_arr[3]<<" divide & conquer sort A"<<std::endl;
    std::cout<<time_total_arr[4]<<" quick sort b"<<std::endl;
    
    return 0;
}
