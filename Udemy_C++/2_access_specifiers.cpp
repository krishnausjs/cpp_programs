#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
public:
	//Attributes - data
	string name;
	int health {100};
	int xp {3}; // Experience
	
	//Methods - Function
	void talk(string text_to_say)
	{
		cout << name << " " << "says " << text_to_say << endl;
	}
	bool is_dead();
};

class Account 
{
public:
	//Attributes
	string name {"Account"};
	double balance {0.0};

	//Methods
	bool deposit(double bal)
	{
		balance += bal;
		cout << "In deposit " << balance << endl;
	}


	bool withdraw(double bal)
	{
		balance -= bal;
		cout << "After withdrawl " << balance <<endl;
	}

};

int main()
{
	Account frank_account;
	frank_account.name = "Franks Account";
	frank_account.balance = 5000;

	frank_account.deposit(1000);
	frank_account.withdraw(500);


	Player frank;

	frank.name = "Frank";
	frank.health = 100;
	frank.xp = 12;
	
	frank.talk("Hi there");

	Player *enemy = new Player;
	(*enemy).name = "Enemy"; // We use braces because . has more precedence than *.
	enemy->health = 100;
	enemy->xp = 14;

	enemy->talk("Hi I will destroy you!!!");

	return 0;
}
