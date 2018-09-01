#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <int> vector1;
	vector <int> vector2;
	
	vector1.push_back(10);
	vector1.push_back(20);

	cout <<"Vector1 items are " <<endl;
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;

	vector2.push_back(100);
	vector2.push_back(200);
	
	cout <<"Vector2 items are " <<endl;
	cout << vector2.at(0) << endl;
	cout << vector2.at(1) << endl;
	
	vector <vector<int>> vector_2D;
	vector_2D.push_back(vector1);
	vector_2D.push_back(vector2);

	vector1.at(0) = 1000;
	
	cout << "Vector_2D contents are " <<endl;
	cout << vector_2D.at(0).at(0) << endl;
	cout << vector_2D.at(0).at(1) << endl;
	cout << vector_2D.at(1).at(0) << endl;
	cout << vector_2D.at(1).at(1) << endl;
		
	return 0;
};
