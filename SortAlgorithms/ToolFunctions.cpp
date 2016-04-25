//
//  ToolFunctions.cpp
//  SortAlgorithms
//
//  Created by 曾诚 on 16-4-25.
//  Copyright (c) 2016年 曾诚. All rights reserved.
//

#include "ToolFunctions.h"

//get a number from [k_num_from, k_num_to]
//if 'from' < 'to' return 0
//be careful when judge the return value, cause k_num_from can be 0.
unsigned int GetAnUnsignedNumFromSpecRange(unsigned int const k_num_from, unsigned int const k_num_to)
{
    if (k_num_from > k_num_to) {
        std::cout<<"range is not ok, small is "<<k_num_from<<", big is "<<k_num_to<<"."<<__FUNCTION__<<std::endl;
        return 0;
    }
    
    unsigned int result_num = 0;
    std::default_random_engine num_generator;
    std::uniform_int_distribution<int> distribution(k_num_from, k_num_to);
    
    result_num = distribution(num_generator);
    
    return result_num;
}