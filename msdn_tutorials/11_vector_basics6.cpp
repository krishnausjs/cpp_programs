/*Returns a const iterator to the first element in a reversed vector. */
// vector_crbegin.cpp
// compile with: /EHsc
#include <vector>
#include <iostream> 

int main( )
{
   using namespace std;
   vector <int> v1;
   vector <int>::iterator v1_Iter;
   vector <int>::const_reverse_iterator v1_rIter;

   v1.push_back( 1 );
   v1.push_back( 2 );

   v1_Iter = v1.begin( );
   cout << "The first element of vector is "
        << *v1_Iter << "." << endl;

   ++(*v1_Iter);
 
   cout << "The first element of vector is "
        << *v1_Iter << "." << endl;

  v1_rIter = v1.crbegin();
   cout << "The first element of the reversed vector is "
        << *v1_rIter << "." << endl;
   //(*v1_rIter)++; <== Should give error "increment of read-only location
}

