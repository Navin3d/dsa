#include <iostream>
using namespace std;

void snakePrint(int a[100][100] , int row , int col){
     
    for(int i=0 ; i<row ; i++){
        if(i%2 == 0){      //even
          for(int j= 0; j < col ; j++)
              cout<<a[i][j]<<" ";
            }
        
        else {
            for(int j=col-1 ; j>=0 ; j--)
             cout<<a[i][j]<<" ";
            }
      }
   
}

int main()
{    int row,col;
cin>>row>>col;
    int a[100][100];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
             cin>>a[i][j];
        }
    }
     snakePrint(a , row,col);
   
    return 0;
}
