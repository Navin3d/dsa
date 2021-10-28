//LEETCODE
//74. Search a 2D Matrix
/*
Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.  */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if( matrix.size() == 0)
            return false;
        int row = matrix.size();
        int col = matrix[0].size();
        
        int low  = 0;
        int high = (row*col)-1;
        
        while(low<=high){
            int mid =(low+ (high-low)/2);
            if(matrix[mid/col][mid%col] == target)
                return true;
            else if(matrix[mid/col][mid%col] < target)
                low = mid+1;                    
            else                
               high = mid-1;    
            }
        
        
    return false;
        
    }
};
