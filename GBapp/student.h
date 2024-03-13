#ifndef student_h
#define student_h

#include "assignment.h"
#include <iostream>
#include <vector>

class StudentClass {

public:

    std::vector<AssignmentClass> assignmentVector;

    //constructor
    StudentClass();

    //gets first name of a student object
    std::string getStudent_fName();

    //sets a first name for a student object
    void setStudent_fName(std::string input);

    //gets last name of a student object
    std::string getStudent_lName();

    //sets a last name for a student object
    void setStudent_lName(std::string input);

    //add an assignment to a specific student
    void addAssignment(std::string assignName);

    //add a score to an assignment of a student
    void addScore();

    //gets the assignment vector
    std::vector<AssignmentClass> getAssignments();

    //prints the assignment vector
    void printAssignments();

private:
    std::string fName;
    std::string lName;
};
#endif
