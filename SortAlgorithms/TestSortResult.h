//
//  TestSortResult.h
//  SortAlgorithms
//
//  Created by 曾诚 on 16-4-29.
//  Copyright (c) 2016年 曾诚. All rights reserved.
//

#ifndef __SortAlgorithms__TestSortResult__
#define __SortAlgorithms__TestSortResult__

#include <iostream>
#include <vector>

bool IsVecIntAscendingOrder(std::vector<int> & to_check_vec);

bool IsVecIntDescendingOrder(std::vector<int> & to_check_vec);

std::vector<std::vector<int> > GetFixLenVecIntVecWithValueInSpecRange(unsigned long const vec_len, unsigned long const vec_int_len,
                                                                      int const value_from,int const value_to);

#endif /* defined(__SortAlgorithms__TestSortResult__) */
