//
//  main.cpp
//  BGUIR_LABS
//
//  Created by mb on 13/10/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#include <iostream>
#include "algorithms.h"
#include "tasks.h"
#include "test_algorithms.h"
#include "functions.h"
int main(int argc, const char * argv[]) {
    test_accumulate();
    int array [10] {2,5,6,7,-22,12,-44,-66,-78,-89};
     task_1(array,0,10);
    task_2(array,0,10);

    return 0;

}
