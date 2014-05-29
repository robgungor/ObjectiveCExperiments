//
//  main.m
//  ComputerName
//
//  Created by Robert Gungor on 5/27/14.
//  Copyright (c) 2014 Do Your Thing. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSHost *host = [NSHost currentHost];
        NSString *info = [host localizedName];
        
        NSLog(@"%@", info);
        
    }
    return 0;
}

