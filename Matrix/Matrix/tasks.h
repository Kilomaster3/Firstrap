//
//  tasks.h
//  Matrix
//
//  Created by mb on 14/10/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef tasks_h
#define tasks_h
#include <iostream>
void task_1(){
    int array [3][2] {{1,2},
        {4,6},
        {7,8}};
    for(int i = 0; i<6; ++i){
        array [0][i]*=2;
    }
    for (int i = 0;i<3;++i){
        for(int j = 0; j<2;++j){
            std::cout << array [i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << array [1][1] << std::endl;

}
void task_2(){
    int array [3][3] {{2,5,8},
                      {5,7,13},
                      {8,12,24}};
    int result [3][3];
    for(int i = 0; i<3;++i){
        for(int j = 0; i<3;++i){
            result [j][i]=array[i][j];
            
        }
    }
    return result;
}











#endif /* tasks_h */
