//
//  main.c
//  TwoFloats
//
//  Created by Robert Gungor on 5/24/14.
//  Copyright (c) 2014 Do Your Thing. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    float floater;
    floater = 10.32;
    
    float me;
    me = 74.98;
    
    double result;
    result = me + floater;
    
    printf("Cool beans %f", result);
    
    return 0;
}

