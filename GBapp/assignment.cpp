#include "assignment.h"

AssignmentClass::AssignmentClass()
{
    name = "none";
    score = 0.0;
}

std::string AssignmentClass::getAssignment_Name()
{
    return name;
}

void AssignmentClass::setAssignment_Name(std::string input)
{
    name = input;
}

double AssignmentClass::getAssignment_Score()
{
    return score;
}

void AssignmentClass::setAssignment_Score(double input)
{
    score = input;
}