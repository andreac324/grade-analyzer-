//
//  lowestGrade.cpp
//  grade analyzer 3
//
//  Created by Andrea d Cazares on 10/7/24.
//
#include <iostream>
#include "lowestGrade.hpp"

double lowestGrade(float grades[],int numbStudents){
    
    int lowest = grades[0];
    for (int i = 0;i<numbStudents;i++){
        if (grades[i]< lowest){
            lowest = grades[i];
        }
    }
   
    return lowest;
}
