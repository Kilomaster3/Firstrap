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
double task_1_6 (int first , int last){
    
    double result = 0;
    for(; first<last; ++first){
        result = result + 1.0/ first;
    }
    return result;
}

void print_numbers (double first, double last, double step){
    
    for (; first<last; first= first+step){
        
        std::cout << first << " ";
    }
    
    
}

void task_for_40 (int a, int b){
    
    int counter = 0;
    for (;a < b+1; ++a){
        ++counter;
        
        for (int i =0; i<counter; ++i){
            std::cout << a << " ";
        }
    }
}


int min (int a , int b){
    if (a < b){
        return a;
    }
    return b;
}
int max (int a , int b){
    if (a > b){
        return a;
    }
    return b;
}
int find_the_environment (int a , int b , int c ){
    int min_value = min(min(a,b),c);
    int max_value = max(max(a,b),c);
    if (a != min_value && a != max_value ){
        return a;
    }
    if (b != min_value && b != max_value ){
        return b;
    }
    return c;
}

int task_14 (int value){
    int result = 0;
    for (int i = 1; i <= 2 * value - 1; i = i + 2){
        result += i;
    }
    return result;
}








#endif /* mylib_h */
