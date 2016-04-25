//
//  FileOperation.h
//  SortAlgorithms
//
//  Created by 曾诚 on 16-4-24.
//  Copyright (c) 2016年 曾诚. All rights reserved.
//

#ifndef __SortAlgorithms__FileOperation__
#define __SortAlgorithms__FileOperation__

#include <iostream>
#include <fstream>

//head file sstream is for istringstream
#include <sstream>

#include <string>
#include <vector>

#include "ToolFunctions.h"

//Read vec of vec<int> from a file
//what if I want a string vec next time?
void ReadUnsignedIntVecFromFile(std::vector< std::vector<int> >& out_vec,const std::string & k_full_file_path);

void WriteRandomUnsignedIntToFile(const std::string & k_full_file_path_to_write, \
                                  const unsigned int k_max_vec_int_vec_len, const unsigned int int_vec_len, \
                                  const unsigned int k_max_num);

#endif /* defined(__SortAlgorithms__FileOperation__) */
