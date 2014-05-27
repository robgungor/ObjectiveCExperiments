//
//  main.c
//  Time
//
//  Created by Robert Gungor on 5/26/14.
//  Copyright (c) 2014 Do Your Thing. All rights reserved.
//

#include <stdio.h>
#include <time.h>

int main(int argc, const char * argv[])
{

    long secondsSince1970 = time(NULL);
    printf("It has been %ld seconds since 1970\n", secondsSince1970);
    
    //struct tm now;
    //localtime_r(&secondsSince1970, &now);
    //printf("The time is %d:%d:%d\n", now.tm_hour, now.tm_min, now.tm_sec);
    
    struct tm later;
    secondsSince1970 += 4000000;
    localtime_r(&secondsSince1970, &later);
    printf("The date later is %d-%d-%d\n", (later.tm_mon+1), later.tm_mday, later.tm_year);
    
    return 0;
}

