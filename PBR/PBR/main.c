//
//  main.c
//  PBR
//
//  Created by Robert Gungor on 5/26/14.
//  Copyright (c) 2014 Do Your Thing. All rights reserved.
//

#include <stdio.h>
#include <math.h>
void metersToFeetAndInches(double meters, unsigned int *ftPtr, double *inPtr){
    // This function assumes meters is non-negative.
    
    // Convert the number of meters into a floating-point number of feet
    double rawFeet = meters * 3.281; // e.g. 2.4536
    
    // How many complete feet as an unsigned int?
    unsigned int feet = (unsigned int)floor(rawFeet);
    
    // Store the number of feet at the supplied adddress
    printf("Storing %u to the address %p\n", feet, ftPtr);
    
    // Calculate inches
    double fractionalFoot = rawFeet - feet;
    double inches = fractionalFoot * 12.0;
    
    // Store the number of inches at the supplied address
    printf("Storing %.2f to the address %p\n", inches, inPtr);
}


int main(int argc, const char * argv[])
{
    double meters = 3.0;
    unsigned int feet;
    double inches;
    metersToFeetAndInches(meters, &feet, &inches);
    printf("%.1f meters is equal to %d feet and %.1f inches.", meters, feet, inches);
    
    return 0;
}

