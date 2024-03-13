#include "gradebook.h"
#include <iomanip>

GradebookClass::GradebookClass() {}

GradebookClass::GradebookClass(std::vector<StudentClass> newGB)
{
    Gradebook = newGB;
}

std::vector<StudentClass> GradebookClass::getGradebook()
{
    return Gradebook;
}

int GradebookClass::getGradebook_size()
{
    return Gradebook.size();
}

void GradebookClass::addStudent_Gradebook()
{
    int killswitch = 0;
    while (killswitch == 0)
    {
        std::string choice;

        std::cout << "Would you like to add a new student? [y/n]: ";
        getline(std::cin, choice);

        if (choice == "y")
        {
            StudentClass newStudent;    //declaration of a new student object
            std::string fName;
            std::string lName;

            std::cout << "First name: ";
            getline(std::cin, fName);  

            std::cout << "Last name: ";
            getline(std::cin, lName);

            newStudent.setStudent_fName(fName); //sets first name to new student
            newStudent.setStudent_lName(lName); //sets last name to new student

            Gradebook.push_back(newStudent); //adds student to the Gradebook

        }
        else if (choice == "n")
        {
            std::cout << "\nBack to main menu...\n\n";
            killswitch = 1;
        }
        else
        {
            std::cout << "Invalid option\n";
        }
    }
}

void GradebookClass::printStudnames()
{
    int counter = 1; //counter to show number of the student
    std::cout << "\nSTUDENTS:" << std::endl;
    for (StudentClass& studentReferenced : Gradebook)
    {
        //outputs student first and last name
        std::cout << counter << ". " << studentReferenced.getStudent_fName() << " " << studentReferenced.getStudent_lName() << std::endl;
        counter++;
    }
}

void GradebookClass::printAssignments()
{
    //outputs all assignments
    int counter = 1;
    std::cout << "\nASSIGNMENTS:" << std::endl;
    for (int i = 0; i < Gradebook[0].assignmentVector.size(); i++)
    {
        std::cout << counter << ". " << Gradebook[0].assignmentVector[i].getAssignment_Name() << std::endl;
        counter++;
    }
}

void GradebookClass::addAssignment_allStuds()
{
    int killswitch = 0;
    while (killswitch == 0)
    {
        std::string input;

        std::cout << "Would you like to add a new assignment? [y/n]: ";
        getline(std::cin, input);

        if (input == "y")
        {
            std::cout << "Please enter the name of the assignment: ";
            std::string input;
            getline(std::cin, input);

            for (StudentClass& newStudent : Gradebook)
            {
                newStudent.addAssignment(input);    //uses referencing to add the assignment to all students in the vector
            }
        }
        else if (input == "n")
        {
            std::cout << "\nBack to main menu\n\n";
            killswitch = 1;
        }
        else
        {
            std::cout << "Invalid option\n";
        }
    }
}

void GradebookClass::addGrade_toOneStudent()
{
    int killswitch = 0;
    while (killswitch == 0)
    {
        std::string choice;

        std::cout << "Would you like to add a score to a student? [y/n]: ";
        getline(std::cin, choice);

        if (choice == "y")
        {
            printStudnames();

            std::cout << "Please enter first name of student: ";
            std::string firstNam;
            getline(std::cin, firstNam);

            std::cout << "Please enter last name of student: ";
            std::string lastNam;
            getline(std::cin, lastNam);

            printAssignments();

            std::cout << "Please enter assignment: ";
            std::string aName;
            getline(std::cin, aName);

            std::cout << "What grade did " << firstNam << " get?" << std::endl;
            std::cout << "Enter the score here: ";
            double score;
            std::cin >> score;

            for (int i = 0; i < getGradebook_size(); i++)
            {
                if ((Gradebook[i].getStudent_fName() == firstNam) && (Gradebook[i].getStudent_lName() == lastNam))
                {
                    for (int j = 0; j < Gradebook[i].assignmentVector.size(); j++)
                    {
                        if (Gradebook[i].assignmentVector[j].getAssignment_Name() == aName)
                        {
                            Gradebook[i].assignmentVector[j].setAssignment_Score(score);
                            std::cout << "\n" << firstNam << " now has a " << score << " on " << aName << std::endl << std::endl;
                        }
                    }
                }
            }
            std::cin.ignore();
        }
        else if (choice == "n")
        {
            std::cout << "\nBack to main menu\n\n";
            killswitch = 1;
        }
        else
        {
            std::cout << "Invalid option\n";
        }
    }
}

void GradebookClass::printGradebook()
{
    std::cout << "\t";
    for (int i = 0; i < Gradebook[0].assignmentVector.size(); i++)
    {
        std::cout << Gradebook[0].assignmentVector[i].getAssignment_Name() << " | ";
    }
    std::cout << std::endl;

    for (int j = 0; j < getGradebook().size(); j++)
    {
        std::cout << Gradebook[j].getStudent_fName() << " " << Gradebook[j].getStudent_lName() << " | ";
        for (int k = 0; k < Gradebook[j].assignmentVector.size(); k++)
        {
            std::cout << getGradebook()[j].assignmentVector[k].getAssignment_Score() << " | ";
        }
        std::cout << std::endl;
    }
}