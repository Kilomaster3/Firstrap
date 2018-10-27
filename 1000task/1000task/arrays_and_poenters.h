//
//  arrays_and_poenters.h
//  1000task
//
//  Created by mb on 07/10/2018.
//  Copyright © 2018 mb. All rights reserved.
//
#include "operation .h"
void fill_arefmetic(int* first , int* last , int a , int d){
    int temp = 0;
    for (; first<last; ++first){
        *first = a + (temp++) * d;
}
}
void fiil_geometric(int* first , int* last , int a , int d){
    int temp = 0;
    for (; first!=last ; ++first){
        *first = a * std::pow(d,temp++);
    }
    
}
void fill_fibonache(int* first , int* last ){
     *(first++) = 0;
     *(first++) = 1;
    for (;first!=last;++first){
        *first =  *(first - 1)  +  *(first - 2);
    }
}
void fiil_task_6(int* first , int* last ,int a ,int b ){
    *(first++)=a;
    *(first++)=b;
    int temp = a+b;
    for (;first!=last;++first){
        *first = temp;
        temp = temp + *first;
    }
}
void print_task_7(int* first , int* last ){
    for(;first!=last;--first){
        std::cout << *first << std::endl;
    }
    
}
void print_task_8(int* first , int* last , UnaryPredicate p){
    for (;first!=last;++first){
        if (p(*first)){
        std::cout << *first << std::endl;
    }
}
}
int print_task_18 (int* first , int* last, int* k){
    for(; first<last ;++first ){
        if (*first<*k){
            return *first;
            }
    }
    return 0;
    
}
int rev=0;
void sorting_bubble(int* array, int size){
    bool is_sort;
    for (int i=0; i<size; ++i){
        is_sort = true;
        for (int j=0; j<size-i-1; ++j){
            if(array[j]<array[j+1]){
                int temp = array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
                is_sort = false;
}
            ++rev;
}
        if(is_sort){
            return;
        }
}
}

#ifndef arrays_and_poenters_h
#define arrays_and_poenters_h


#endif /* arrays_and_poenters_h */
