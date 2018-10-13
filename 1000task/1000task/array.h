//
//  array.h
//  1000task
//
//  Created by mb on 30/09/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef array_h
#define array_h
#include <cmath>
#include "operation .h"
#include "predicates.h"
void fill_array (int* array, int size ){
    for (int i= 0 ; i<size ; ++i){
        array[i] = i;
    }
    
}
void change_var (int* p){
    *p= 99;
    
    
}


void iter_swape(int* a, int* b){
    int temp= *a;
    *a = *b;
    *b = temp;
    
}
void print_array(int* array, int first, int last){
    for (; first<last; ++first){
        std::cout << array[first] << std::endl;
    }
}

void fill_array_power_2 (int* array , int first , int last){
    for(; first<last ; ++first){
        array[first] = std::pow(2,first);
}
}
void fill_array_power_2_2 (int* array , int first , int last){
    int temp = 1;
    for(; first<last ; ++first){
        array[first] = temp;
        temp = temp * 2;
    }

}

void fill_array_power_3 (int* array , int first , int last, int d, int a){
    for (; first<last; ++first){
        array[first] = a + first * d;
    }
    
}
 void fill_array_task_4 (int* array , int first , int last, int d, int a){
     for (; first<last; ++first){
         array [first] = a * std::pow(d,first );
     }
 
 }
void fill_array_fibonache (int* array, int first , int last){
    array [first++] = 0;
    array [first++] = 1;
    for (; first<last; ++first){
        array [first] = array [first - 1] + array [first - 2];
    }
}
void fill_array_task_6 (int* array , int first , int last, int a, int b){
    array [first++] = a;
    array[first++] = b;
    int temp = a+b;
    for (; first<last; ++first){
        array [first] = temp;
        temp = temp + array[first];
    }
}
void print_array_if_7 (int* array , int first , int last, UnaryPredicate p){
    for (;first< last; ++first){
        if (p(array [first])){
            std::cout << array[first] << std::endl;
        }
    }
}

void print_array_if_8 (int* array , int first , int last, UnaryPredicate p){
    for (;first>last; --first){
        if (p(array [first])){
            std::cout << array[first] << std::endl;
        }
    }
}
int accum(int* array , int first, int last, int result ,BinaryOperation operation){
    
    for (;first<last ;++first){
        result = operation (result,array[first]);
    }
    return result;
}

int average(int* array , int first, int last ){
    int temp = accum (array, first, last, 0, sum);
    return temp / (last - first);
 
}

bool all_of(int* array , int first , int last,UnaryPredicate p){
    for(;first!=last;++first ){
        if (!p(array[first])){
            return false;
        }
    }
    return true;
}

#endif /* array_h */
