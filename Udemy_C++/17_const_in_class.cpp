#include <iostream>
#include <string>

using namespace std;

class Player {
private:
	std::string name;
	int health;
	int xp;
public:
	std::string get_name() const {
		//xp = 100; //ERROR with const in above line	
		return name;
	}

	//Overloaded Constructors
	Player();
	Player(std::string name_val);	
	Player(std::string name_val, int health_val, int xp_val);
};

Player::Player() 
	:Player {"None", 0, 0} {

}

Player::Player(std::string name_val) 
	:Player {name_val, 0, 0} {

}

Player::Player(std::string name_val, int health_val, int xp_val)
	:name{name_val}, health{health_val}, xp{xp_val} {

}

void display_player_name(const Player &p) {
	cout << p.get_name() << endl;
}

int main(){

	const Player villain {"Villan", 100, 55};

	Player hero {"Hero", 100, 15};
	
	cout << villain.get_name() << endl; //ERROR
	cout << hero.get_name() << endl;
	display_player_name(villain);  //ERROR
	display_player_name(hero); //ERROR without const at the end of get_name member function.

	return 0;
}
