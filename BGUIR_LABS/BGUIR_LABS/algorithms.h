//
//  algorithms.h
//  BGUIR_LABS
//
//  Created by mb on 13/10/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef algorithms_h
#define algorithms_h
using BinaryOperation = int (*) (int,int);
int accumulate(int* array, int first, int last){
    int temp = 0;
    for (;first<last;++first){
        temp += array[first];
    }
    return temp;
}
int accumulate(int* array, int first, int last, int temp, BinaryOperation op){
    for (;first<last;++first){
        temp=op(temp,array[first]);
    }
    return temp;
}






#endif /* algorithms_h */
