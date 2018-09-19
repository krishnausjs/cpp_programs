#include <iostream>
using namespace std;
int main()
{
    char vowels[] {'a','e','i','o','u'};
    cout << "\n The first vowel is: " << vowels[0];
    cout << "\n The last vowel is :" << vowels[4];
    
    //cin>>vowels[5]; <== C++ doesnt do boundary checking. Dont access out of bound values
    //cout << "\n New vowel is : " << vowels[5];
    
    double hi_temps[] {90.1,89.8,77.5,81.6};
    cout <<"\n The first high temperature is :" << hi_temps[0];
    
    hi_temps[0]=22.3;
    cout <<"\n The first high temperature is :" << hi_temps[0] << endl;
    
    //int test_scores[5] {0};
    //int test_scores[5] {90}; //Initializing first element to 90 not all elements.
    int test_scores[] {90,80,30,40,20};
    cout << "\n Frist score at index 0 :" << test_scores[0] << endl;
    cout << "Second score at index 1 :" << test_scores[1] << endl;
    cout << "Third score at index 2 :" << test_scores[2] << endl;
    cout << "Fourth score at index 3 :" << test_scores[3] << endl;
    cout << "Fifth score at index 4 :" << test_scores[4] << endl;    
    
    cout << "Enter test scores" << endl;
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];
    
    cout << "New scores are :" << endl;
    cout << "\n Frist score at index 0 :" << test_scores[0] << endl;
    cout << "Second score at index 1 :" << test_scores[1] << endl;
    cout << "Third score at index 2 :" << test_scores[2] << endl;
    cout << "Fourth score at index 3 :" << test_scores[3] << endl;
    cout << "Fifth score at index 4 :" << test_scores[4] << endl;    
    
    cout << "Notice what the value of the array name is: "<< test_scores << endl;
    cout << "Notice  the next value of the array name is: "<< test_scores+1 << endl;
    return 0;
}