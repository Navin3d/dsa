//Method 1(SIMPLE METHOD TO COUNT SET BIT)

#include <bits/stdc++.h> 
using namespace std; 

unsigned int countSetBits(unsigned int n) 
{ 
	unsigned int count = 0; 
	while (n != 0) {
	    if (n % 2 != 0)
	       count++;
	    n = n/2;      
	} 
	return count; 
} 

int main() 
{ 
	int n;
  cout<<"Enter a number to count the set bits";
  cin>>n;
	cout << countSetBits(n); 
	return 0; 
} 
