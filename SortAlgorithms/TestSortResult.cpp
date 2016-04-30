//
//  TestSortResult.cpp
//  SortAlgorithms
//
//  Created by 曾诚 on 16-4-29.
//  Copyright (c) 2016年 曾诚. All rights reserved.
//

#include "TestSortResult.h"
#include "ToolFunctions.h"

bool IsVecIntAscendingOrder(std::vector<int> & to_check_vec)
{
    unsigned long vec_size = to_check_vec.size();
    
    for (unsigned long i = 0; i < vec_size - 1; i++) {
        if (to_check_vec[i] > to_check_vec[i + 1]) {
            return false;
        }
    }
    
    return true;
}

bool IsVecIntDescendingOrder(std::vector<int> & to_check_vec)
{
    unsigned long vec_size = to_check_vec.size();
    
    for (unsigned long i = 0; i < vec_size - 1; i++) {
        if (to_check_vec[i] < to_check_vec[i + 1]) {
            return false;
        }
    }
    
    return true;
}

std::vector<std::vector<int> > GetFixLenVecIntVecWithValueInSpecRange(unsigned long const vec_len, unsigned long const vec_int_len,
                                                        int const value_from, int const value_to)
{
    std::vector<std::vector<int> > vec_int_vec;
    
    for (unsigned long i = 0; i < vec_len; i++) {
        std::vector<int> temp_vec;
        for (unsigned long j = 0; j < vec_int_len; j++) {
            int temp_int = GetAnUnsignedNumFromSpecRange(value_from, value_to);
            temp_vec.push_back(temp_int);
        }
        vec_int_vec.push_back(temp_vec);
    }
    
    return vec_int_vec;
}