#ifndef PLAYERCLASS_H
#define PLAYERCLASS_H
#include <iostream>
#include <string>

using namespace std; 

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



	void print();
};

#endif PLAYERCLASS_H
