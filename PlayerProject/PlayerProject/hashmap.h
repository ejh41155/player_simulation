#ifndef HASHMAP_H
#define HASHMAP_H

#include <iostream>
#include <list>
#include <string>
using namespace std; 
#include "functions.h"

class Hashmap
{
private:

	const static int hashgroups = 10; 
	list<pair<int, Player>> table[hashgroups];


public: 

	bool isEmpty();
	int hashFunction(int key);
	void insert(int key, Player& player);
	void remove(int key);
	void print();
};

#endif
