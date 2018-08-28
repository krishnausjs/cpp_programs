#include <iostream>
#include <string.h>

using namespace std;

class Player {
private:
	//attributes
	string name {"Player"};
	int health;
	int xp;

public:
	//methods
	void talk(string text_to_say)
	{
		cout << name << " says "<<text_to_say << endl;
	}
	bool is_dead();
};


int main()
{
    Player frank;
	//Compilation errors for below commented lines
	//frank.name = "frank";	
	//cout << frank.health << endl;
	frank.talk("Hello there");
	return 0;
}
