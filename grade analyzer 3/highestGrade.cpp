//
//  highestGrade.cpp
//  grade analyzer 3
//
//  Created by Andrea d Cazares on 10/7/24.
//
#include <iostream>
#include "./highestGrade.hpp"
double highestGrade(float grades[],int numbStudents){
    
    int highest = grades[0];
    for (int i = 0;i<numbStudents;i++){
        if (grades[i]> highest){
            highest = grades[i];
        }
    }
   
    return highest;
}
