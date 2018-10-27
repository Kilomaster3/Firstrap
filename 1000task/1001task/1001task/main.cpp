//
//  main.cpp
//  1001task
//
//  Created by mb on 26/10/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#include <iostream>
#include "numeric.h"
#include "fraction.h"
int main(int argc, const char * argv[]) {
    int result = stu::gcd(127,9);
    std::cout << result << std::endl;
    Fraction a;
    Fraction b (3,4);
    Fraction c (1,2);
    bool  d = b < c;
    std::cout << d << std::endl;
    
    
}

