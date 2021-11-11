/*
137. Single Number II
Medium
Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.
You must implement a solution with a linear runtime complexity and use only constant extra space.
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> c(32,0);
        int n=nums.size();
        for(int no : nums)
        {
            for(int i=0 ; i<32; i++){
                if(no & (1<<i))
                       c[i]++;
                }
        }
 
        int ans =0;
        for(int i=0 ; i<32 ;i++)
           if(c[i]%3)           
               ans = ans+ (1<<i);   
        return ans;        
    }
};
