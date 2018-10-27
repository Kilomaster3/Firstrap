//
//  Predicate.h
//  use_vector
//
//  Created by mb on 25/10/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef Predicate_h
#define Predicate_h
#include <cmath>
bool is_positive(int a){
    return a>0;
}
bool is_negative(int a){
    return a<0;
}
bool no_grater_1(int a){
    return std::abs(a)<1;
}





#endif /* Predicate_h */
