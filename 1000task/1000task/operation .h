//
//  operation .h
//  1000task
//
//  Created by mb on 30/09/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef operation__h
#define operation__h
using BinaryOperation = int (*) (int, int);
using UnaryPredicate = bool (*) (int);
int sum (int a, int b){
    return a+b;
}


#endif /* operation__h */
