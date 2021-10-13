#include <iostream>
using namespace std;

int main() {
    int a[1000][1000];
    int row,col,val = 1;
    cout<<"Enter rows and coloumns: ";
    cin>>row>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
    
    // wave print
    for(int j=0;j<col ; j++){
      // check if j is even or odd
        if(j%2 == 0){    // even
          for(int i=0;i<row ; i++)
             cout<<a[row][col]<<" ";
        }
        else {         // od2d
            for(int i=row-1 ; i>=0 ;i--)
                cout<<a[row][col]<<" ";
        }
  }
   
    return 0;
}