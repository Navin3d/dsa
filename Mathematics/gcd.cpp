// YOUTUBE LINK     https://www.youtube.com/watch?v=VWOUh4w_zVI

//EUCLIDEAN ALGORITHM TO FIND GCD OF TWO NUMBERS
//OPTIMIZED SOLUTION TO FIND GCD
#include <iostream>
using namespace std;

 int gcd(int a, int b)
{  // return b==0? a : gcd(b , a%b);  
	if(b==0)
		return a;

	return gcd(b, a % b);
}

int main() {
    
    	int a,b;
    	cout<<"Enter two numbers: ";
    	cin>>a>>b;
    	
    	cout<<gcd(a, b);
    	
    	return 0;
}
