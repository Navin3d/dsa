#include <iostream>
using namespace std;

int main() {
    int a[1000][1000];
    int row,col;
    cout<<"Enter rows and coloumns: ";
    cin>>row>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
      
    int wave=0;     //0 bottom to top and 1 top to bottom
    for(int j=col-1; j>=0 ; j--){

        if(wave == 0) {     //odd index(bottom to top)
            for(int i=0 ; i<row ; i++){
                cout<<a[i][j]<<" ";
                wave =1;
            }
        }

        else{              //odd
            for(int i=row-1 ; i>=0 ; i-- ){
                    cout<<a[i][j]<<" ";
                              wave=0;
            }
        }
    }
}