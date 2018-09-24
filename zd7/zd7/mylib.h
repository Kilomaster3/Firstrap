//
//  mylib.h
//  zd7
//
//  Created by mb on 24.09.2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef mylib_h
#define mylib_h
#include <cmath>
double task_1_4 (double x, double y ){
    
    double temp = std::sqrt(x) + (1+x)/2 + std::pow(y,x);
    return std::sqrt(temp);
    
}

double task_1_5 (double x ){
    double temp = std::pow(x,2)/ std::pow(std::sin(x),2) + std::pow(std::cos(x),2);
    return temp;
    
}








#endif /* mylib_h */
