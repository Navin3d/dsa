//693. Binary Number with Alternating Bits
/*
Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.

 

Example 1:

Input: n = 5
Output: true
Explanation: The binary representation of 5 is: 101

*/

class Solution {
public:
    bool hasAlternatingBits(int n) {
      long long int ans = n ^ (n>>1);
        
        if( ((ans+1) & ans) ==0)
            return true;
        else
            return false;
        
        
        }
    
};
