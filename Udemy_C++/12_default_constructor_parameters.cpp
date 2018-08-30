#include <iostream>
#include <string.h>

using namespace std;

class Player {
private:
	std::string name;
	int health;
	int xp;

public:
	//Overloaded constructors
	//Player();
	//Player(std::string name_val);
	Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);	
};

#if 0
Player::Player()
	   :Player {"None", 0, 0 } {
	cout << "No args constructor" << endl;
}

Player::Player(std::string name_val) 
	   :Player(name_val, 0, 0) {
	cout << "One arg constructor" << endl;
}
#endif

Player::Player(std::string name_val, int health_val, int xp_val) 
	   :name(name_val), health(health_val), xp(xp_val) {
	cout << "Three arg constructors"<<endl;
}


int main()
{
	Player empty;
	Player frank("Frank");
	Player villan("Villan",100,50);
	Player hero("Hero", 0);
	return 0;
}
