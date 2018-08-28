#include <iostream>
#include <vector>
#include <map>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    //Key is the number and value is its index in the vector.
	unordered_map<int, int> hash;
	vector<int> result;
	for (int i = 0; i < numbers.size(); i++) {
		int numberToFind = target - numbers[i];

            //if numberToFind is found in map, return them
		if (hash.find(numberToFind) != hash.end()) {
                    //+1 because indices are NOT zero based
			result.push_back(hash[numberToFind] + 1);
			result.push_back(i + 1);			
			return result;
		}

            //number was not found. Put it in the map.
		hash[numbers[i]] = i;
	}
	return result;
}

int main()
{
	vector<int> v;
	vector<int> result;

	int k = 9;
	v.push_back(2);
	v.push_back(3);
	v.push_back(7);
	v.push_back(1);
	restult = twoSum(v,9);
	cout << result.at(0) << endl;
	return 0;
}
