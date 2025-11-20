#include <iostream>
using namespace std; 
#include <string>
#include "functions.h"


void comparePlayers(const Player& playerA, const Player& playerB)
{
	char input{};
	std::cout << "You have selected " << playerA.name << " and " << playerB.name << ".\n"
		<< "Please select a number for comparison:\n"
		<< "  1 - Position\n"
		<< "  2 - Age\n"
		<< "  3 - Overall Rating\n"
		<< "  4 - Years Played in League\n"
		<< "  5 - Current Salary\n"
		<< "  6 - Years Left in Contract\n"
		<< "  7 - Exit\n";

	do 
	{
		std::cout << "Enter Choice: \n";

		if (!(std::cin >> input)) {
			std::cin.clear(); 
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
			continue;
		}
	
			switch (input)
			{ 
			case '1': CO::comparePosition(playerA, playerB);
				break;
			case '2': CO::compareAge(playerA, playerB);
				break;
			case '3': CO::compareOverall(playerA, playerB);
				break;
			case '4': CO::compareExperience(playerA, playerB);
				break;
			case '5': CO::compareSalary(playerA, playerB);
				break;
			case '6': CO::compareYears(playerA, playerB);
				break;
			case '7': break;
			default: std::cout << "Please enter a number 1 through 7 \n";
				break;
			}
	} while (input != '7');
}

