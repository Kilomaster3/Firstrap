//
//  main.cpp
//  brace
//
//  Created by mb on 25/10/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#include <iostream>
#include <string>
#include <stack>
int main(int argc, const char * argv[]) {
   
    std::string s = "([]){{()}}";
    std::stack<char> c;
    c.push(s[0]);
    std::cout << c.size() << std::endl;
    c.push(s[1]);
    std::cout << c.size() << std::endl;
    c.pop();
    std::cout << c.top() << std::endl;
    
}
