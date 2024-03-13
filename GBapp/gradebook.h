#ifndef gradebook_h
#define gradebook_h

#include "student.h"
#include "assignment.h"
#include <iostream>

class GradebookClass {

public:
    //constructor
    GradebookClass();
    GradebookClass(std::vector<StudentClass> newGB);

    //the getter to get "JoshGradebook" vector of objects
    std::vector<StudentClass> getGradebook();

    //a getter to get the size of the vector of students
    int getGradebook_size();

    //the function to add students to the vector of objects "Gradebook"
    void addStudent_Gradebook(); 

    //the function to add an assignment to every single student in the vector "Gradebook"
    void addAssignment_allStuds();

    //the function to add a grade to a specific student and specific assignment
    void addGrade_toOneStudent();

    //the function that creates a really bad looking table of the whole gradebook
    void printGradebook();

    //the function that lists all the students in the vector "Gradebook"
    void printStudnames();

    //the function that lists all the assignments
    void printAssignments();

private:
    std::vector<StudentClass> Gradebook;
};
#endif
