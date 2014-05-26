//
//  main.c
//  Addresses
//
//  Created by Robert Gungor on 5/25/14.
//  Copyright (c) 2014 Do Your Thing. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i = 17;
    int *addressOfI = &i;
    printf("i stores its value at %p\n", addressOfI);
    *addressOfI = 89;
    printf("Now i is %d\n", i);
    printf("An int is %zu bytes\n", sizeof(int));
    printf("A pointer is %zu bytes\n", sizeof(int *));
    printf("A float pointer is %zu bytes\n", sizeof(float *));
    return 0;
}

