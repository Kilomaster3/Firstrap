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
#include "operation .h"







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
    int array [10]{2,4,6,8,9,-10,15,-22,19,16};
//fill_array_power_2 (array, 0,10);
//print_array(array, 0, 10);
    //fill_array_task_4 (array, 0,10,2,6);
    //print_array(array,0,10);
    //fill_array_fibonache (array,0,10);
    //print_array(array,0,10);
    //fill_array_task_6 (array, 0,10,4,8);
    //print_array(array,0,10);
    //print_array_if_7 (array ,0,10, is_positive);
    //print_array_if_8 (array ,10,-1, is_positive);
    int result = accum(array ,0 ,10,1000, sum);
    std::cout << result << std::endl;
}


    
    
