//
//  main.cpp
//  SortAlgorithms
//
//  Created by 曾诚 on 16-4-24.
//  Copyright (c) 2016年 曾诚. All rights reserved.
//

#include <iostream>
#include "FileOperation.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    WriteRandomUnsignedIntToFile("/Users/zc/Desktop/abc.txt", 30, 10, 14);
    
    std::cout << "Hello, World!\n";
    return 0;
}
