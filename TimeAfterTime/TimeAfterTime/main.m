//
//  main.m
//  TimeAfterTime
//
//  Created by Robert Gungor on 5/27/14.
//  Copyright (c) 2014 Do Your Thing. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSDate *now = [[NSDate alloc] init];
        NSLog(@"This NSDate object lives at %p", now);
        NSLog(@"The date is %@", now);
        
        double seconds = [now timeIntervalSince1970];
        NSLog(@"It has been %f seconds since the start of 1970.", seconds);
        
        NSDate *later = [now dateByAddingTimeInterval:100000];
        NSLog(@"In 100,000 seconds it will be %@", later);
        
        NSCalendar *cal = [NSCalendar currentCalendar];
        NSLog(@"My calendar is %@", [cal calendarIdentifier]);
        
        unsigned long day = [cal ordinalityOfUnit:NSDayCalendarUnit
                                           inUnit:NSMonthCalendarUnit
                                          forDate:now];
        
        NSLog(@"This is day %lu of the month", day);
        
        
        NSDateComponents *bday = [[NSDateComponents alloc] init];
        [bday setYear:1974];
        [bday setMonth:9];
        [bday setDay:24];
        [bday setHour:14];
        [bday setMinute:12];
        [bday setSecond:0];
        
        NSCalendar *g = [[NSCalendar alloc] initWithCalendarIdentifier:NSGregorianCalendar];
        NSDate *dob = [g dateFromComponents:bday];
        
        double secondsSinceEarlierDate = [now timeIntervalSinceDate:dob];
        NSLog(@"It has been %f seconds since my birthday.", secondsSinceEarlierDate);
        
        NSDate *oneBillionthSecond = [dob dateByAddingTimeInterval:1000000000];
        NSLog(@"My 2 billionth second will be %@", oneBillionthSecond);
    }
    return 0;
}

