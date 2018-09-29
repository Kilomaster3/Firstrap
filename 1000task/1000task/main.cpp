//
//  main.cpp
//  1000task
//
//  Created by mb on 24.09.2018.
//  Copyright © 2018 mb. All rights reserved.
//

#include <iostream>
#include "task_if.h"
#include "functions.h"
#include "loops.h"
#include "task_for.h"
#include "array.h"



int main(int argc, const char * argv[]) {
//std::cout << accum (2,20) << std::endl;
//std::cout << product (2,20) << std::endl;
//std::cout << task_for_7 (3) << std::endl;
//std::cout << task_for_15 (2,4) << std::endl;
//std::cout << factorial(5) << std::endl;
//print_price(20,2,20);
//loops::print_numbers(10);
//tf::print_numbers(2,10);
//print_even_numbers(25);
// task_if_1(2);
//task_if_2 (5);
//task_if_3 (9);
//task_if_6 (3,6);
//std::cout << "" << std::endl;
//f(2,5);
    /*
    int array[10]{ 2,4,6,8,10,12,14,16,18,20};
    fill_array(array,10);
    for(int i = 0; i<10 ; ++i){
        std::cout << array[i] << std::endl;
    }
*/
    int a = 4;
    int b = 5;
    iter_swape (&a , &b);
    int* ap = &a;
    //change_var(&a);
    std::cout << a  << std::endl;
    std::cout << b << std::endl;
    
    
    return 0;
}
