//
//  tasks.h
//  BGUIR_LABS
//
//  Created by mb on 13/10/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef tasks_h
#define tasks_h
#include <iostream>
#include "algorithms.h"
#include "functions.h"
void task_1 (int* array ,int first, int last){
    int p = accumulate(array,first,last,0,sum_positive);
    int p1 = accumulate(array,first,last,1,mul_negative);
    std::cout << p << " " << p1 << std::endl;
}
void task_2 (int* array ,int first, int last){
    int p = accumulate(array,first,last,0,sum_negative);
    int p1 = accumulate(array,first,last,1,mul_even);
    std::cout << p << " " << p1 << std::endl;
}




#endif /* tasks_h */
