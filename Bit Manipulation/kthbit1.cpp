#include <iostream> 
using namespace std; 

void isKthBitSet(int n, int k) 
{ 
	if ((n >> (k - 1)) & 1)  //RIGHT SHIFT OPERATOR
		cout << "SET"; 
  
  /* 
          n=8 , k = 4 
  
  1.)     8  ( 000...1000 )
  2.)     8 is right shifted to 3 i.e(k-1)   then it becomes , 000..0001
  3.)     000..0001 & 00..0001  to check if 1
  
 */
	else
		cout << "NOT SET"; 
} 

// Driver code 
int main() 
{ 
	int n , k ;
  cout<<"Enter n  and kth value : "<< endl;
  cin>>n>>k;
  
	isKthBitSet(n, k); 
	return 0; 
} 
