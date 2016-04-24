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

#include <random>


//Read vec of vec<int> from a file

//what if I want a string vec next time?
void ReadUnsignedIntVecFromFile(std::vector< std::vector<int> >& out_vec,const std::string & k_full_file_path)
{
    out_vec.clear();
    
    if (!k_full_file_path.length()) {
        std::cout<<"File path len is 0, can not read anything."<<__FUNCTION__<<std::endl;
        return;
    }
    
    std::ifstream vec_int_file_stream(k_full_file_path);
    
    std::string vec_int_string;
    
    while (std::getline(vec_int_file_stream, vec_int_string)) {
        std::vector<int> one_int_vec;
        
        std::istringstream vec_int_string_stream(vec_int_string);
        int one_int_from_string_stream;
        while (vec_int_string_stream >> one_int_from_string_stream) {
            //what will happen if 'one_int_from_string_stream' is not a number?
            one_int_vec.push_back(one_int_from_string_stream);
        }
        out_vec.push_back(one_int_vec);
    }
}

void WriteRandomUnsignedIntToFile(const std::string & k_full_file_path_to_write, \
                                  const unsigned int k_max_vec_int_vec_len, const unsigned int k_max_num)
{
    if (!k_full_file_path_to_write.length()) {
        std::cout<<"File path len is 0, can not write anything."<<__FUNCTION__<<std::endl;
        return;
    }
    
    if (!k_max_vec_int_vec_len) {
        std::cout<<"vec<int> len is "<<k_max_vec_int_vec_len<<", "<<__FUNCTION__<<std::endl;
        return;
    }
    
    std::ofstream file_to_write_stream(k_full_file_path_to_write);
    
    //random
    int vec_int_vec_length;
    
    while (vec_int_vec_length) {
        //random
        int vec_int_length;
        while (vec_int_length) {
            //random
            int random_int;
            
            //write to file
            
            vec_int_length--;
        }
        
        vec_int_vec_length--;
    }
    
}

#endif /* defined(__SortAlgorithms__FileOperation__) */
