//
//  main.cpp
//  use_vector
//
//  Created by mb on 25/10/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Predicate.h"
using UnaryPredicate = bool (*) (int);
std::vector<int> f(int* array, int first, int last, UnaryPredicate p){
    std::vector<int> result;
    for(;first<last;++first){
        if(p(array[first])){
            result.push_back(array[first]);
        }
    }
    return result;
}

int main(int argc, const char * argv[]) {
    int array[7]{2,6,8,5,3,-8,-10};
    changr_el(array,0,7,no_grater_1);
        
    }
}



