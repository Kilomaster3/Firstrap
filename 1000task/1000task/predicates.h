//
//  predicates.h
//  1000task
//
//  Created by mb on 24.09.2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef predicates_h
#define predicates_h
bool is_positive (int a ){
    return a > 0;
}
bool is_negative (int a){
    return !is_positive(a);
}
bool is_even (int a){
    return a % 2 == 0;
}




#endif /* predicates_h */
