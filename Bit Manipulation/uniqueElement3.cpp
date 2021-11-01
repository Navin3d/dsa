/*
We are given an array containg n numbers. All the numbers are present thrice except for one number which is only present once. Find the unique number. Only use - bitwise operators, and no extra space.

Input Format
First line contains the number n. Second line contains n space separated number.

Constraints
N < 10^5

Output Format
Output a single line containing the unique number

Sample Input
7
1 1 1 2 2 2 3
Sample Output
3
Explanation
3 is present only once

*/

#include<iostream>
using namespace std;

int main() {
	int c[64] = {0};
	int n;
	cin>>n;
    int num ;
	for(int i=0 ; i<n ; i++){
         cin>>num;
         int j =0;
		 while(num>0){
			 int lastBit = num&1;
             c[j] = c[j]+lastBit;
			 j++;
			 num = num>>1;
		 }
	}

    int p =1 , ans =0;
	for(int i=0 ; i<64 ; i++)
	{
		c[i] %= 3;
        ans = ans + (c[i]*p);
		p = p<<1;
	}
	cout<<ans<<endl;
	return 0;

}
