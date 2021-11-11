//1351. Count Negative Numbers in a Sorted Matrix
/*
Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.
*/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        // THIS IS NAIVE APPROACH
//      int c=0;
//         for(int i=0 ; i<grid.size(); i++){
//             for(int j=0 ; j<grid[0].size(); j++){
//                 if(grid[i][j] < 0)
//                     c++;
//             }
//         }
//      return c;        
        int r = grid.size();  //4
        int c= grid[0].size();  //4
        int count =0;
        int i=r-1;
        int j=0;
      while(i>=0 and j<c){
         
              if(grid[i][j] < 0 ){
                  count += (c-j);
                  i--;
              }
              
              else
                   j++;
          
      }
        return count;
    }
};
