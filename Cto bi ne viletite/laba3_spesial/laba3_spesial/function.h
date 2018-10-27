//
//  function.h
//  laba3_spesial
//
//  Created by mb on 27/10/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef function_h
#define function_h
#include <cmath>
#define PI 3.14
double factorial(int value){
    double result = 1;
    for(int i =2; i <= value; ++i){
        result *= i;
    }
    return result;
}

double task_1(double x , double n){
    return pow(-1,n) * pow(x,2*n+1)/factorial(2*n-1);
}
double task_2(double x, double n){
    return pow(x,2*n)/factorial(2*n);
}
double task_3(double x, double n){
    return cos(n*PI/4)/factorial(n)*pow(x,n);
}
double task_4(double x, double n){
    return pow(-1,n) * pow(x,2*n)/factorial(2*n);
}
double task_5(double x, double n){
    return  2*n+1*pow(x,2*n)/factorial(n);
}
double task_6(double x, double n){
    return pow(x,2*n+1)/factorial(2*n+1);
}
double task_7(double x, double n ){
    return pow(-1,n+1)* pow(x,2*n+1)/4*pow(n,2)-1;
}
double task_8(double x, double n){
    return pow(2*x,n)/factorial(n);
}
double task_9(double x, double n){
    return pow(n,2)+1/factorial(n)*pow(x/2,n);
}
double task_10(double x, double n){
    return pow(-1,n)* pow(x,2*n+1)/2*n+1;
}
double task_11(double x, double n){
    return pow(-1,n)* pow(2*n,2)+1*pow(x,2*n)/factorial(2*n);
}
double task_12(double x, double n){
    return pow(-1,n)*pow(2*x,2*n)/factorial(2*n);
}
double task_13(double x, double n){
    return pow(-1,n) * pow(1+x,2*n)/factorial(2*n);
}
double task_14(double x, double n){
    return pow(n,2)* pow(x,n)/factorial(2*n+1);
}
double task_15(double x, double n){
    return pow(-1,n+1)*pow(x,2*n)/2*n*(2*n-1);
}
#endif /* function_h */
