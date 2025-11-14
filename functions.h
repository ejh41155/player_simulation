#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <string>


class Player
{
public:

	Player()
	{
	
		name = "na";
		sport = "na";
		position = "na";
		age = 0;
		overall = 0;
		ex = 0;
		salary = 0;
		contract_years = 0;
	}

	Player(int i, string n, string s, string p, int a, int o, int e, long sa, int c)
	{
		ID = i; 
		name = n;
		sport = s;
		position = p;
		age = a;
		overall = o;
		ex = e;
		salary = sa;
		contract_years = c;
	}


	void print()
	{
		std::cout << ID << '\n';
		std::cout << name << '\n';
		std::cout << sport << '\n';
		std::cout << position << '\n';
		std::cout << age << '\n';
		std::cout << overall << '\n';
		std::cout << ex << '\n';
		std::cout << salary << '\n';
		std::cout << contract_years << '\n';
		std::cout << '\n';
	}

	friend void comparePlayers(const Player& playerA, const Player& playerB);
	friend struct CO;

	friend std::ostream& operator<<(std::ostream& os, const Player& player) {
		os << "Name: " << player.name
			<< ", Sport: " << player.sport
			<< ", Position: " << player.position
			<< ", Age: " << player.age
			<< ", Overall: " << player.overall
			<< ", Experience: " << player.ex
			<< ", Salary: " << player.salary
			<< ", Contract years: " << player.contract_years;
		return os;
	}

	int getID() const { return ID; }

private: 
	int ID{};
	string name{};
	string sport{};
	string position{};
	int age{};
	int overall{};
	int ex{};
	long salary{};
	int contract_years{};

};

struct CO {
	
	static void comparePosition(const Player& playerA, const Player& playerB)
	{
		if (playerA.position == playerB.position)
		{
			std::cout << "The two players both play " << playerA.position << '\n';
		}
		else
		{
			std::cout << "These two players play different positons \n";
		}
	}

	static void compareAge(const Player& playerA, const Player& playerB)
	{
		if (playerA.age == playerB.age)
		{
			std::cout << "The two players are both " << playerA.age << '\n';
		}
		else if (playerA.age > playerB.age)
		{
			std::cout << playerA.name << " who is " << playerA.age << " years old, is older than " << playerB.name << " who is " << playerB.age << '\n';
		}
		else if (playerA.age < playerB.age)
		{
			std::cout << playerB.name << " who is " << playerB.age << " years old, is older than " << playerA.name << " who is " << playerA.age << '\n';
		}
	}

	static void compareOverall(const Player& playerA, const Player& playerB)
	{
		if (playerA.overall == playerB.overall)
		{
			std::cout << "The two players are both" << playerA.overall << " overall. \n";
		}
		else if (playerA.overall > playerB.overall)
		{
			std::cout << playerA.name << " who is a " << playerA.overall << " overall is " << playerA.overall - playerB.overall << " points higher than " << playerB.name << " who is a " << playerB.overall << " overall. \n";
		}
		else if (playerA.overall < playerB.overall)
		{
			std::cout << playerB.name << " who is a " << playerB.overall << " overall is " << playerB.overall - playerA.overall << " points higher than " << playerA.name << " who is a " << playerA.overall << " overall. \n";
		}
	}

	static void compareExperience(const Player& playerA, const Player& playerB)
	{
		if (playerA.ex == playerB.ex)
		{
			std::cout << "The two players both have " << playerA.ex << " years of experience \n";
		}
		else if (playerA.ex > playerB.ex)
		{
			std::cout << playerA.name << " who has " << playerA.ex << " years of experience, has " << playerA.ex - playerB.ex << " more years of experience than " << playerB.name << " whohas " << playerB.ex << " years of experience. \n";
		}
		else if (playerA.salary < playerB.salary)
		{
			std::cout << playerB.name << " who has " << playerB.ex << " years of experience, has " << playerB.ex - playerA.ex << " more years of experience than " << playerA.name << " who has " << playerA.ex << " years of experience. \n";
		}
	}

	static void compareSalary(const Player& playerA, const Player& playerB)
	{
		if (playerA.salary == playerB.salary)
		{
			std::cout << "The two players are both making " << playerA.salary << '\n';
		}
		else if (playerA.salary > playerB.salary)
		{
			std::cout << playerA.name << " who is making " << playerA.salary << " dollars per year years, is making " << playerA.salary - playerB.salary << " more per year than " << playerB.name << " who is making " << playerB.salary << " dollars per year. \n";
		}
		else if (playerA.salary < playerB.salary)
		{
			std::cout << playerB.name << " who is making " << playerB.salary << " dollars per year years, is making " << playerB.salary - playerA.salary << " more per year than " << playerA.name << " who is making " << playerA.salary << " dollars per year. \n";
		}
	}

	static void compareYears(const Player& playerA, const Player& playerB)
	{
		if (playerA.contract_years == playerB.contract_years)
		{
			std::cout << "The two players both have " << playerA.contract_years << (playerA.contract_years == 1 ?  " year" : " years") << " on his contracts. \n";
		}
		else if (playerA.contract_years > playerB.contract_years)
		{
			std::cout << playerA.name << " who has " << playerA.contract_years << (playerA.contract_years == 1 ? " year" : " years") << " on his contract, has " << playerA.contract_years - playerB.contract_years << " more " << (playerA.contract_years - playerB.contract_years == 1 ? "year" : " years") << " on his contract than " << playerB.name << " who has " << playerB.contract_years << (playerB.contract_years == 1 ? " year" : " years") << " on his contract \n";
		}
		else if (playerA.contract_years < playerB.contract_years)
		{
			std::cout << playerB.name << " who has " << playerB.contract_years << (playerB.contract_years == 1 ? " year" : " years") << " on his contract, has " << playerB.contract_years - playerA.contract_years << " more " << (playerB.contract_years - playerA.contract_years == 1 ? "year" : " years") << " on his contract than " << playerA.name << " who has " << playerA.contract_years << (playerA.contract_years == 1 ? " year" : " years") << " on his contract \n";
		}
		else 
		{
			std::cout << "Error, please enter two valid players! \n";
		}
	}
};

#endif