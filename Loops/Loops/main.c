//
//  main.c
//  Loops
//
//  Created by Robert Gungor on 5/25/14.
//  Copyright (c) 2014 Do Your Thing. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i;
    for( i = 0; i < 12; i++) {
        if (i % 3 == 0) {
            // skip the rest of the loop
            continue;
        }
        printf("Checking i = %d\n", i);
        if(i + 90 == i * i){
            // end the loop
            break;
        }
    }
    printf("the answer is %d. \n", i);
    
    // DO-WHILE
    i = 0;
    
    do {
        printf("%d. Rob is Cool\n", i);
        i++;
    } while (i < 12);
    
    return 0;
}

