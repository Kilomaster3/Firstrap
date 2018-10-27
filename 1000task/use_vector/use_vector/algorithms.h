//
//  algorithms.h
//  use_vector
//
//  Created by mb on 25/10/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef algorithms_h
#define algorithms_h
template <typename UnarePredicate>
void changr_el(int* array,int first, int last, UnarePredicate p){
    for(;first<last;++first){
        if(p(array[first])){
            array[first] == 0;
    
            
        }
    }
}









#endif /* algorithms_h */
