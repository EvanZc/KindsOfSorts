//
//  main.cpp
//  SortAlgorithms
//
//  Created by 曾诚 on 16-4-24.
//  Copyright (c) 2016年 曾诚. All rights reserved.
//

#include <iostream>
#include "FileOperation.h"
#include "ToolFunctions.h"
#include "QuickSort.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    WriteRandomUnsignedIntToFile("/Users/zc/Desktop/abc.txt", 30, 10, 14);
    
    std::vector<std::vector<int> >vec;
    
    ReadUnsignedIntVecFromFile(vec, "/Users/zc/Desktop/abc.txt");
    
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i].size() > 0) {
            QuickSortStandard(vec[i], 0, vec[i].size() - 1);
        }
        else{
            std::cout<<"Number "<<i<<" vec's size is 0."<<std::endl;
        }
        
        for (int j = 0; j < vec[i].size(); j++) {
            std::cout<<vec[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    
    std::cout << "Hello, World!\n";
    return 0;
}
