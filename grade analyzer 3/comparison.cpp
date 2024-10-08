//
//  comparison.cpp
//  grade analyzer 3
//
//  Created by Andrea d Cazares on 10/7/24.
//
#include <iostream>
#include <string>
#include "comparison.hpp"

std::string compareStudent(float grades[], int numbStudents, int student1,int student2){
  
    
    if (student1 < 0 ||student1 >= numbStudents ||student2 < 0 || student2 >= numbStudents) {
        return "Invalid";
    }
    
    if (grades[student1] > grades[student2]) {
        return "student " + std::to_string(student1 + 1) + " has a higher grade";
    } else if (grades[student1] < grades[student2]) {
        return "student " + std::to_string(student2 + 1) + " has a higher grade";
    } else {
        return "students have the same grade";
    }
}
