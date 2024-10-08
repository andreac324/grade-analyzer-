//
//  aboveAverage.cpp
//  grade analyzer 3
//
//  Created by Andrea d Cazares on 10/7/24.
//
#include<iostream>
#include "./average.hpp"
#include "./aboveAverage.hpp"

int aboveAverage(float grades[], int numbStudents){
    if (numbStudents <= 0) {
        return 0;
    }
    
    double avg = average(grades,numbStudents);
    int count = 0;
    
    for (int i = 0; i < numbStudents; i++) {
        if (grades[i]> avg) {
            count++;
        }
    }

    return count;
}
