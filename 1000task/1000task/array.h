//
//  array.h
//  1000task
//
//  Created by mb on 30/09/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef array_h
#define array_h

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

















#endif /* array_h */
