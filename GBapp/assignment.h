#ifndef assignment_h
#define assignment_h

#include <iostream>
#include <string>

class AssignmentClass {

public:
    //constructor
    AssignmentClass();

    //gets the assignment name
    std::string getAssignment_Name();

    //sets a name for an assignment object
    void setAssignment_Name(std::string input);

    //gets the assignment score
    double getAssignment_Score();

    //sets a percentage number for an assignment object
    void setAssignment_Score(double input);

private:
    std::string name;
    double score;
};
#endif
