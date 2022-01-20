 //Number of configuration

#include <iostream>
using namespace std;

void printArray(int board[][20], int n)
{
   for(int i=0 ;i<n ; i++)
   {
   for(int j=0 ; j<n ;j++)
       {
 cout<<board[i][j]<<" ";
       }
      cout<<endl;
   }

   cout<<endl;
}

bool canPlace(int board[][20], int n ,int x,int y)
{
    //top most col(upper part)
    for(int k =0 ; k<x ; k++)
    {
         if(board[k][y] == 1)
         {
             return false;
         }
    }

    //left diag
    int i=x ;
    int j=y;
    while(i>=0 and j>=0)
    {
        if(board[i][j] == 1)
        {
            return false;
        }

        i--;
        j--;
    }

    //right diag
//reassign the value of i and j again because it will be having -1 value for both as it had checked for the left diag first

    i = x;
    j=y;
    while(i>=0 and j<n)
    {
        if(board[i][j] == 1)
        {
            return false;
        }

        i--;
        j++;
    }

    return true;
}

 int NQueenWays(int board[][20], int n, int i)
  {  
      //base case
      if(i==n)
      {
          //printArray(board, n);
          
          return 1;
      }

int ways =0;
//rec case
//try placing Q in each row
for(int j = 0;j<n ; j++)
{
   
    if(canPlace(board , n , i, j))
    {
         board[i][j] = 1; 
         ways = ways + NQueenWays(board , n ,i+1);
        
      //backtracking
         board[i][j] = 0;
    }
    
}

return ways;

  }

int main() {
   int board[20][20]={0};
   int n;
   cin>>n;
  cout<< NQueenWays(board, n ,0);
  
    return 0;
}