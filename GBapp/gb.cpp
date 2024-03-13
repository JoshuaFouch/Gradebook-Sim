#include "gradebook.h"
#include <iostream>
#include <stdlib.h>


int main()
{
	GradebookClass myGb;
	bool exitApp = false;

	while (exitApp == false) {
		system("CLS");
		int choice;
		std::cout << "-----Gradebook Simulator-----" << std::endl;
		std::cout << "\nWhat would you like to do?" << std::endl;
		std::cout << "1. Add student to the gradebook" << std::endl;
		std::cout << "2. Enter assignment to the gradebook" << std::endl;
		std::cout << "3. Enter a grade for a student's assignment" << std::endl;
		std::cout << "4. Print full gradebook" << std::endl;
		std::cout << "5. Exit Gradebook" << std::endl;
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			std::cin.ignore();
			system("CLS");
			myGb.addStudent_Gradebook();
			continue;
		case 2:
			std::cin.ignore();
			system("CLS");
			myGb.addAssignment_allStuds();
			continue;
		case 3:
			std::cin.ignore();
			system("CLS");
			myGb.addGrade_toOneStudent();
			continue;
		case 4:
			system("CLS");
			myGb.printGradebook();
			system("pause");
			continue;
		case 5:
			system("CLS");
			std::cout << "Exiting gradebook..." << std::endl;
			exitApp = true;
			break;
		default:
			continue;
		}
		return 0;
	}

	return 0;
}