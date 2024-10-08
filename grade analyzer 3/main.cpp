//
//  main.cpp
//  grade analyzer 3
//
//  Created by Andrea d Cazares on 10/6/24.
//

#include <iostream>
#include "./average.hpp"
#include "./highestGrade.hpp"
#include "./lowestGrade.hpp"
#include "./aboveAverage.hpp"
#include "./comparison.hpp"
using namespace std;
int main() {
    const int maxStudents = 50;
    float grades [maxStudents];
    int numbStudents;
    int student1,student2;
    
    cout<< " how many students?"<<endl;
    cin>>numbStudents;
    
    for (int i=0;i<numbStudents;i++){
        cout<< "what are the student grades? ";
        cin>>grades[i];
    }
   
    

   
    
    cout<< "average grade is: "<< average(grades, numbStudents)<<endl;
    
    cout<< "highest grade is: "<<highestGrade(grades,numbStudents)<< endl;
    
    cout<< "lowest grade is: "<<lowestGrade (grades,numbStudents)<<endl;
    
    cout<< "amount of students above the average are: "<<aboveAverage(grades,numbStudents);
    
    cout << "Enter (in order of entered grades) two students to compare (1 to " << numbStudents << "): ";
    cin >> student1 >> student2;
    cout << compareStudent(grades, numbStudents, student1 - 1, student2 - 1) << endl;
    
    return 0;
}




