//
//  main.cpp
//  my_vector
//
//  Created by mb on 25/10/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#include <vector>
#include <iostream>
template<typename T>
struct Vector{
    T* array;
    int size;
    int capasity;
    Vector(){
        capasity = 500;
        array = new T[capasity];
        size = 0;
    }
};
int main(int argc, const char * argv[]) {
    Vector<int> a;
    std::vector<int> b;
}
