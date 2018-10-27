//
//  array.h
//  bguir
//
//  Created by mb on 19/10/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef array_h
#define array_h
#include "comparison.h"
using UnaryPredicate  = bool (*) (int);
using BinarPredicate = bool (*) (int, int);
void iter_swap(int* a,int* b){
    int temp= *a;
    *a = *b;
    *b = temp;
}

void print_array(int* array, int size){
    for (int i = 0; i<size; ++i){
        std::cout << array[i]<< std::endl;
    }
}

void bubble_sort(int* array, int size){
    
    for(int i=0; i<size;++i)
        for(int j=0; j<size-1; ++j){
            if(array[j] < array[j+1]){
                iter_swap(array+j,array+j+1);
                
            }
        }
}

bool all_of (int* array, int first, int last){
    for(;first<last;++first){
        if(!p(array [first], array [first+1])){
            return false;
        }
    }
    return true;
}
/*
bool y (int* array , int first , int last,UnaryPredicate j){
    for (; first<last; ++first){
        if(j(array[first])){
            return true;
        }
    }
    return false;
}
*/
void task_1  (int* array, int size){
    for(int i=0; i<size; ++i){
        for(int j=i+1;j<size;++j){
            if(array[i]==array[j]){
                std::cout << array[i] << std::endl;
                break;
            }
        }
    }
}
bool y2 (int* array, int first, int last, UnaryPredicate k ){
    for(;first<last;++first){
        if(k(array[first])){
            return false;
        }
    }
    return true;
}
void fibonache (int* array, int size){
    for(int q=2; q<size;++q){
        array[q] = array[q-1] + array[q-2];
    }
    std::cout << array[8]<< std::endl;
}
int count_el(int* array, int size){
    int temp = 0;
    for(int i=0; i<size; ++i){
        if(array[i]%2 == 0){
            temp = temp+1;
        }
    }
    return temp;
}
void last_el(int* array , int first, int last){
    for(int k = 0; last-1>first; --last){
        if(array[k] == 0){
            std::cout <<array[k] << std::endl;
        }
    }
}
int accum(int* array, int )





#endif /* array_h */
