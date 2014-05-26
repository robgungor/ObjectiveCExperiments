//
//  main.c
//  CountDown
//
//  Created by Robert Gungor on 5/25/14.
//  Copyright (c) 2014 Do Your Thing. All rights reserved.
//
#import <readline/readline.h>
#import <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
    printf("Where should I start counting? \n");
    const char *num = readline(NULL);
    
    int i;
    
    for( i = atoi(num); i >= 0; i-=3){
        
        printf("%d \n", i);
        
        if(i % 5 == 0){
            printf("FOUND ONE! %d \n", i);
        }
            
    }
    
    return 0;
}

