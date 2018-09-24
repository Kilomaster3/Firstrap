//
//  task_if.h
//  1000task
//
//  Created by mb on 24.09.2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef task_if_h
#define task_if_h
#include "predicates.h"
void task_if_1 (int a){
    
    if (is_even(a)){
        std::cout << a+1;
    }
    else {
        std::cout << a;
    }
    
}

void task_if_2 (int a){
    if (is_even(a)){
        std::cout << a+1;
    } else {
        std::cout << a-2;
    }
}
void task_if_3 (int a){
    if (is_positive(a)){
        std::cout << a+1;
    }
    else{
        if (is_negative(a)){
            std::cout << a-2;
        }
        else {
            std::cout << 10;
        }
    }
    
}




#endif /* task_if_h */
