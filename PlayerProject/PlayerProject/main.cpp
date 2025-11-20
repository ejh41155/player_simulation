#include "hashmap.h"
#include "functions.h"
#include <iostream>
#include <string>
#include <list>
using namespace std; 


int main() 
{
        
        Hashmap H; 

        Player p1(101, "EthanJamesHoward12345", "Football", "WR", 20, 99, 1, 15000000, 5);
        Player p2(102, "James", "Basketball", "PG", 25, 92, 6, 45000000, 4);

        H.insert(p1.getID(), p1);
        H.insert(p2.getID(), p2);

        H.print();

        comparePlayers(p1, p2);

        return 0;
}

	
