//
//  numeric.h
//  1001task
//
//  Created by mb on 26/10/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef numeric_h
#define numeric_h

namespace stu{
    template <class T>
    void swap(T& a, T& b ){
        T temp = a;
        a = b;
        b = temp;
    }
int gcd(int a, int b){
    /*
    123 % 9 = 6
    9 % 6 = 3
    6 % 3 = 0
    */
    if(a<b){
        stu::swap(a,b);
    }
    int temp;
    while (temp = a % b) {
        a = b;
        b = temp;
    
    }
    return b;
}
    int lcm(int a , int b){
        return (a*b)/stu::gcd(a, b);
    }
}

#endif /* numeric_h */
