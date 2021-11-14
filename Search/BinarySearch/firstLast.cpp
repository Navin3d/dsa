//34. Find First and Last Position of Element in Sorted Array
//LEETCODE
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v = {-1, -1};
        int n=nums.size();
        if( n==0)
            return v;
        
        int start = 0, last = n-1;   
        //first occurance
        int f=-1;
        while(start <= last){
            int mid = (start+last)/2;
            if(nums[mid] == target)
            {
                f = mid;
                last = mid-1;
            }        
            else if(nums[mid] > target)
                last = mid-1;
            else
                start = mid+1;
        }
        
        
        v[0] = f;

        //end occurance
       start =0;
        last = n-1;
        int e = -1;
        while(start<=last){
                int mid = (start+last)/2;
            if(nums[mid] == target)
            {
                e = mid;
                start = mid+1;
            }        
            else if(nums[mid] > target)
                               last = mid-1;  
            else 
             start = mid+1;
        }
        
        v[1] =  e;
        return v;
    }
};