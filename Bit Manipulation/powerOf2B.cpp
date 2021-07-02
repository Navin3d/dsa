#include <iostream>
using namespace std;

// The POWER OF 2 WILL HAVE ONLY ONE SET BIT

/*
n = 8, binary rep of 8 = 000..1000
n-1=7, binary rep of 7 = 000..0111

On doing AND operation, the value is 0.                     o/p is true.
------------------------------------------------------------------------------------------
n = 6, binary rep of 6 = 000..0110
n-1=5, binary rep of 5 = 000..0101

On doing AND operation, the value is not eqaul to 0(it is 4).         o/p is false.

*/

 bool isPow2(long long n){ 
   if(n==0)
          return false;
        return ( (n&(n-1)) == 0);  
    }


  int main() {
	
	long long int n ;
	cout<<"Enter a number: ";
	cin>>n;
	
	printf("%s", isPow2(n)? "true": "false");
}
