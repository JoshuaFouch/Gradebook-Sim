#include "student.h"

StudentClass::StudentClass()
{
    fName = "First";
    lName = "Last";
}

std::string StudentClass::getStudent_fName()
{
    return fName;
}

void StudentClass::setStudent_fName(std::string input)
{
    fName = input;
}

std::string StudentClass::getStudent_lName()
{
    return lName;
}

void StudentClass::setStudent_lName(std::string input)
{
    lName = input;
}

void StudentClass::addAssignment(std::string assignName)
{
    AssignmentClass newAssignment; //declare a new object of class assignment

    newAssignment.setAssignment_Name(assignName); //this uses the assignment name setter to add assignment to the student object

    assignmentVector.push_back(newAssignment); //adds the assignment object into the assignment vector

}

std::vector<AssignmentClass> StudentClass::getAssignments()
{
    return assignmentVector;
}

void StudentClass::printAssignments()
{
    int counter = 1;
    std::cout << "ASSIGNMENTS:\n" << std::endl;
    for (AssignmentClass& newAssignment : assignmentVector)
    {
        std::cout << counter << ". " << newAssignment.getAssignment_Name() << std::endl;
        counter++;
    }
    std::cout << std::endl;
}