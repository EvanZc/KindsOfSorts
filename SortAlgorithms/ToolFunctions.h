//
//  ToolFunctions.h
//  SortAlgorithms
//
//  Created by 曾诚 on 16-4-25.
//  Copyright (c) 2016年 曾诚. All rights reserved.
//

#ifndef __SortAlgorithms__ToolFunctions__
#define __SortAlgorithms__ToolFunctions__

#include <iostream>
#include <random>


//get a number from [k_num_from, k_num_to]
//if 'from' < 'to' return 0
//be careful when judge the return value, cause k_num_from can be 0.
unsigned int GetAnUnsignedNumFromSpecRange(unsigned int const k_num_from, unsigned int const k_num_to);

#endif /* defined(__SortAlgorithms__ToolFunctions__) */
