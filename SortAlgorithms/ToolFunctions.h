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
#include <chrono>

//get a number from [k_num_from, k_num_to]
//if 'from' < 'to' return 0
//be careful when judge the return value, cause k_num_from can be 0.
unsigned int GetAnUnsignedNumFromSpecRange(unsigned int const k_num_from, unsigned int const k_num_to);

/*
    duration:
    std::chrono::hours h(1); // one hour
    std::chrono::milliseconds ms{3}; // 3 milliseconds
    std::chrono::duration<int, std::kilo> ks(3); // 3000 seconds
 
    duration is a period of time
 */


//get now time by nanoscond
inline std::chrono::nanoseconds GetNowNanoSecond()
{
    return std::chrono::system_clock::now().time_since_epoch();
}


//how to pass any number of parameters
inline void PrintLogToCommandLine(std::string &string)
{

}



//get time diff

#endif /* defined(__SortAlgorithms__ToolFunctions__) */
