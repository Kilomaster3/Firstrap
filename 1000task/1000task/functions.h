//
//  functions.h
//  1000task
//
//  Created by mb on 24.09.2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef functions_h
#define functions_h
int min(int a, int b){
    if (a < b)
        {
            return a;
        }
    return b;
}
int min3 (int a, int b , int c ){
    return min (min (a,b), c);
}
int max(int a, int b){
    if (a > b){
        return a;
    }
    return b;
}
int max3 (int a, int b, int c){
    return max (max (a,b), c);
}


#endif /* functions_h */
