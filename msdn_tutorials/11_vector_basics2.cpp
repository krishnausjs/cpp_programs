#include <iostream>
#include <vector>

//#define ENABLE_STUDY
/*If the return value of at is assigned to a const_reference, the vector object cannot be modified. If the return value of at is assigned to a reference, the vector object can be modified. */
int main( )
{
   using namespace std;
   vector <int> v1;

   v1.push_back( 10 );
   v1.push_back( 20 );

   const int &i = v1.at( 0 );
   int &j = v1.at( 1 );
#ifdef ENABLE_STUDY
   j++;
   i++; 
#endif
   cout << "The first element is " << i << endl;
   cout << "The second element is " << j << endl;
}
