#include <iostream>
using namespace std;

void spiralPrint(int a[][10] , int r , int c){
    //variable
    int startRow = 0, endRow = r-1;
    int startCol = 0, endCol = c-1;

    while(startCol<= endCol and startRow<= endRow){
        //first row
        for(int i=startCol; i<=endCol; i++){
            cout<<a[startRow][i]<<" ";
        }

        //last col
        for(int i=startRow+1 ; i<=endRow ; i++){
              cout<<a[i][endCol]<<" ";
        }

        //last row
        for(int i=endCol-1 ; i>=startCol ; i--){
            if(startRow == endRow){
                break;
            }
            else
            cout<<a[endRow][i]<<" ";
        }
        

        //first col
        for(int i=endRow-1 ; i>=startRow+1 ; i--){    
            if(startCol==endCol){
                break;
            }    
            else
            cout<<a[i][startCol]<<" ";
        }

        //inc 
        startRow++;
        startCol++;
        endCol--;
        endRow--;
    }
}

int main(){
    int ans[][10] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
    };

    int r=4,c=4;
    spiralPrint(ans, r ,c);
}
