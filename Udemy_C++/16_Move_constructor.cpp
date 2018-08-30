#include <iostream>
#include <vector>

using namespace std;

class Move {
private:
	int *data;
public:
	void set_data_value(int d) { *data = d; }
	int get_data_value() { return *data; }

	//Constructor
	Move(int d);
	
	//Copy constructor
	Move(const Move &source);

#if 0
    //Move constructor	
	Move(Move &&source) noexcept;
#endif

	//Destructor 
	~Move();
};

Move::Move(int d) {
	data = new int;
	*data = d;
	cout << "Constructor for: " << endl;
}


Move::Move(const Move &source) 
	:Move(*source.data) {
	cout <<" Copy constrcutor - deep copy for" << *data << endl;
}

#if 0
Move::Move(Move &&source) noexcept
	:data{source.data} {
	source.data = nullptr;
	cout <<"Move constructor - moving resource " << *data << endl;
}
#endif

Move::~Move() {
	if(data != NULL) {
		cout << "Destructor freeing data for: "<< *data << endl;
	}
	else {
		cout << "Destructor freeing data for null pointer" << endl;
	}
	delete data;
}

int main() {
	vector <Move> vec;
	
	vec.push_back(Move{10});
	vec.push_back(Move{20});
	vec.push_back(Move{30});
	vec.push_back(Move{40});
	vec.push_back(Move{50});
	vec.push_back(Move{60});
	vec.push_back(Move{70});
	vec.push_back(Move{80});

	return 0;
}
