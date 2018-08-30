#include <iostream>
using namespace std;
class Player {
private:
	std::string name;
	int health;
	int xp;

public:
	//Overloaded constructors
	Player();
	Player(std::string name_val);
	Player(std::string name_val, int health_val, int xp_val);	
};

Player::Player(): Player {"None" , 0, 0} {
	std::cout << "No args constructor" << endl;
}

Player::Player(std::string name_val) : Player {name_val, 0, 0} {
	std::cout << "1 arg constructor" << endl;

};

Player::Player(std::string name_val, int health_val, int xp_val)
	   :name {name_val}, health {health_val} , xp {xp_val} {
	std::cout << "3 args constructor" << endl;
}

int main() {
	Player enemy;
	Player  frank("Frank");
	Player villan("Villan", 100, 10);

	return 0;

}
