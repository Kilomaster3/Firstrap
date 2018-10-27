//
//  comparison.h
//  bguir
//
//  Created by mb on 22/10/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef comparison_h
#define comparison_h
bool p(int a , int b){
    return (a<0 ^ b<0);
}
bool g(int a){
    for(;a;a/=10){
        if (a%10 ==0 || a%10 ==1){
            return true;
        }
    }
    return false;
}
bool is_positive(int a , int b){
    return b>a;
}
#endif /* comparison_h */
