#include <iostream>
#include <vector>

using namespace std;

int main() {
	//vector <char> vowels; 
	//vector <char> vowels(5); //5 initialized to zero
	vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

	cout << vowels[0] << endl;
	cout << vowels[4] << endl;

	vector <int> test_scores {100,98,89};
	cout << "Test scores using array syntax\n" <<endl;
	//No bounce check here
	cout << test_scores[0] << endl;
	cout << test_scores[1] << endl;
	cout << test_scores[2] << endl;
	

	cout << "Test scores using at syntax\n" <<endl;
	// bounce check done here
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;

	cout <<"\n Enter a test score to add to the vector";
	int score_to_add{0};
	cin >> score_to_add;
	
	test_scores.push_back(score_to_add);

	cout << "Test score after push back are"<<endl;

	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << test_scores.at(3) << endl;
	cout << "Size of vector is " << test_scores.size() << endl;

	//2D vector
	vector <vector<int>> movie_ratings
	{
		{1,2,3,4},
		{1,2,4,4},
		{1,3,4,5}
	};

	cout <<"\nHere are the movie ratings for reviewer #1 using array syntax:" <<endl;
	cout << movie_ratings[0][0] << endl;
	cout << movie_ratings[0][1] << endl;
	cout << movie_ratings[0][2] << endl;
	cout << movie_ratings[0][3] << endl;

	cout <<"\nHere are the movie ratings for reviewer #1 using vector syntax"<<endl;
	cout << movie_ratings.at(0).at(0) << endl;
	cout << movie_ratings.at(0).at(1) << endl;
	cout << movie_ratings.at(0).at(2) << endl;
	cout << movie_ratings.at(0).at(3) << endl;
	return 0;
}
