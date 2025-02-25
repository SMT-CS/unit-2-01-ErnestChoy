// Copyright (c) 2025 Ernest All rights reserved
//
// Created by: Ernest
// Created on: February 2025
// This program finds the perimeter of a circle

/// Importing the things needed to do the calculations
#include <stdio.h>
#include <math.h>

int main(void) {
    float diameter, perimeter;

    // asking for input of numbers
    printf("Enter diameter in millimeters: ");
    // ""%f"" makes it a float and ""&(variable name)"
    // stores the number as a variable
    scanf("%f", &diameter);
    // calculating and assigning values to area and perimeter
    perimeter = M_PI * (diameter);
    // printing the answers
    // %.(number) rounds the float to a given amount of decimals
    // "perimeter"" replaces %f in string to the variable "perimeter".
    printf("Perimeter: %.5f meters\n", perimeter);

    printf("\nDone.\n");
    return 0;
}
