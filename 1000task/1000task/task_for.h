//
//  task_for.h
//  1000task
//
//  Created by mb on 29/09/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef task_for_h
#define task_for_h
namespace tf{
void print_number(int k, int times){
    
    for(int i= 0; i<times ; ++i){
        std::cout << k;
    }
    
}
    int print_numbers(int first, int last){
        int temp = first;
        for (; first<last; ++first){
            std::cout << first << std::endl;
        }
        return last-temp;
    }
    
    
}

void print_price (int price, int first , int last ){
    
    for (; first<last; ++first){
        std::cout << first << " kg " << " price: " << first * price << std::endl;
    }
    
}

int accum (int first , int last){
    int sum = 0;
    for (; first<last ; ++first){
        sum = sum + first;
    }
    return sum;
    
}

int product (int first , int last){
    int sum = 1;
    for (; first<last ; ++first){
        sum = sum * first;
    }
    return sum;
    
}

double task_for_7(int n)
{
    double sum = 0;
    double temp = -1;
    for(double i = 0.1; i < n; i += 0.1)
    {
        temp = temp * -1;
        sum = sum + i * temp;
    }
    return sum;
}

int task_for_15 (int value , int power ){
    int temp = 1;
    for (int i = 0; i<power; ++i ){
        temp = temp * value;
    }
    return temp;
}

int factorial (int value){
    int temp = 1;
    for (int i = 2; i<= value; ++i ){
        temp = temp * i;
    }
    return temp;
}

#endif /* task_for_h */
