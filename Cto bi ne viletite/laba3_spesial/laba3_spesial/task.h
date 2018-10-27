//
//  task.h
//  laba3_spesial
//
//  Created by mb on 27/10/2018.
//  Copyright © 2018 mb. All rights reserved.
//

//first a
//last n

#ifndef task_h
#define task_h
#include <cmath>
template <class BinaryOperation>
double f(int first, int last, double x , BinaryOperation p){
    double result = 0;
    for(;first<last;++first){
        result += p(x,first);
    }
    return result;
}
template <class BinaryOperation>
void f1(double first, double last , double step , double x , BinaryOperation p){
    for(;first<last; first= first + step){
        std::cout << f(0,160,x,p) << std::endl;
    }
}




#endif /* task_h */
