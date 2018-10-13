//
//  loops.h
//  1000task
//
//  Created by mb on 29/09/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef loops_h
#define loops_h
#include "predicates.h"
namespace loops{
    

void print_hello_10_times () {
    
    for(int i = 0; i < 10; ++i){
        std::cout << "Hello World"<< std::endl;
    }
    
    
}


void print_hello(int times) {
    
    for(int i = 0; i < times; ++i){
        std::cout << "Hello World"<< std::endl;
    }
    
    
}


void print_numbers(int times){
    for(int i = 0; i < times; ++i){
        std::cout << i<< std::endl;
    }
    
}

void print_numbers(int first, int last, int step){
    for(; first < last; first= step + first){
        std::cout << first << std::endl;
    }
    
}

void print_numbers(double first, double last, double step){
    for(; first < last; first = step + first){
        std::cout << first << std::endl;
    }
    
}



void print_even_numbers(){
    print_numbers(0,10,2);
    
    
    
}

void print_even_numbers(int times){
    
    print_numbers(0,times,2);
    
    
}

void print_even_numbers(int first , int last){
    if (! is_even(first)){
        ++first;
    }
   print_numbers(first, last,2 );
    
}

}

#endif /* loops_h */
