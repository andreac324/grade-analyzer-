//
//  average.cpp
//  grade analyzer 3
//
//  Created by Andrea d Cazares on 10/7/24.
//
#include <iostream>
#include "./average.hpp"

double average(float grades[], int numbStudents){
    double add = 0;
    for (int i = 0; i<numbStudents;i++){
        add+= grades[i];
    }
    return add/numbStudents;
}

