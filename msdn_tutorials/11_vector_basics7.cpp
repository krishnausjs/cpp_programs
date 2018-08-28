/*Returns a const iterator that addresses the location succeeding the last element in a reversed vector. */

// vector_crend.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1;
   vector <int>::const_reverse_iterator v1_rIter;

   v1.push_back( 1 );
   v1.push_back( 2 );

   for ( v1_rIter = v1.rbegin( ) ; v1_rIter != v1.rend( ) ; v1_rIter++ )
//	 for(auto& v1_rIter:v1) 
     cout << *v1_rIter << endl;
}
