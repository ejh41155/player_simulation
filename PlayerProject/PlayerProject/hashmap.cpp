#include <iostream>
#include <list>
#include <cstring>
#include "hashmap.h"
using namespace std;

bool Hashmap::isEmpty()
{
	int sum{};

	for (int i{}; i < hashgroups; i++)
	{
		sum += table[i].size();
	}

	if (!sum)  
	{ 
		return true; 
	}
	return false; 

}

int Hashmap::hashFunction(int key)
{
	return key % hashgroups; 
}

void Hashmap::insert(int key, Player& player)
{
	int hashvalue{ hashFunction(key) };
	bool keyExists = false; 
	auto& cell = table[hashvalue];
	auto bItr = cell.begin();

	for (; bItr != cell.end(); bItr++)
	{
		if (bItr->first == key) 
		{
			keyExists = true; 
			bItr->second = player;
			std::cout << "[Warning] a player already exists at this spot, replacing previous player. \n";
			break; 
		}
	}
	if (!keyExists)
	{
		std::cout << "[Info] player has been inserted \n";
		cell.emplace_back(key, player);
		return; 
	}
}

void Hashmap::remove(int key)
{
	int hashvalue{ hashFunction(key) };
	bool keyExists = false; 
	auto& cell = table[hashvalue];
	auto bItr = begin(cell);

	for (; bItr != end(cell); bItr++)
	{
		if (bItr->first == key)
		{
			keyExists = true; 
			cell.erase(bItr);
			std::cout << "[Info] Player has been removed. \n";
			break; 
		}
	}
	if (!keyExists)
	{
		std::cout << "[Error] there is no player at this key. \n";
	}
	return; 
}

void Hashmap::print()
{
	for (int i{}; i < hashgroups; i++)
	{
		if (table[i].size() == 0) continue;

		auto bItr = table[i].begin();

		for (; bItr != table[i].end(); bItr++)
		{
			std::cout << "Key: " << bItr->first << "Player: " << bItr->second << '\n';
		}
	}
	return; 
}






















