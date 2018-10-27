//
//  main.cpp
//  case_tasks
//
//  Created by mb on 15/10/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#include <iostream>
enum Operation{Add,Sub,Mul,Div};
int cul  (int op1, int op2, Operation operation){
    switch (operation) {
        case 0:return op1+op2;
        case 1:return op1-op2;
        case 2: return op1*op2;
        case 3: return op1/op2;

    }
}
enum Langh_unit{m,cm,km};
double convert_to_metr(double l,Langh_unit unit){
    switch (unit) {
        case m: return l;
        case cm: return l/100;
        case km: return l*1000;
    }
}
enum block_weight{gr,kg,t};
int convert_to_weight(double w,block_weight weight){
    switch (weight) {
        case gr: return w;
        case kg: return w/100;
        case t: return w*1000;
    }
}
int main(int argc, const char * argv[]) {
    int result = cul(2,3,Operation::Add);
    std::cout <<result << std::endl;
    double result1 = convert_to_metr(2,Langh_unit::m);
    std::cout <<result1 << std::endl;
    double result2 = convert_to_weight(7,block_weight::t);
    std::cout <<result2 << std::endl;
    return 0;
}
