#include <iostream>
using namespace std;

void boundaryPrint(int a[100][100] , int row , int col){
     int startRow =0;
     int endRow = row-1;
     int startCol = 0;
     int endCol = col-1;


    // for(int i=0 ; i<endCol ; i++){

    // }
  if(startCol<=endCol and startRow<= endRow){
       //first row
       for(int i=startCol ; i<= endCol; i++ ){
           cout<<a[startRow][i]<<" ";
       }
       startRow++;

       //last col
       for(int i = startRow ; i<=endRow ; i++){
           cout<<a[i][endCol]<<" ";
       }
       endCol--;

       //last row
       for(int i=endCol;i>=startCol ; i--){
           cout<<a[endRow][i]<<" ";
       }
       endRow--;

       //first col
       for(int i=endRow ;i>=startRow ;i--){
           cout<<a[i][startCol]<<" ";
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
     boundaryPrint(a , row,col);

    return 0;
}
