#include <iostream>
using namespace std;

void staircaseSearch(int a[100][100], int r, int c, int key){

    int j = c-1;
    int i = 0;

    if(key<a[0][0] or key>a[r-1][c-1])
             cout<<"Key not found"<<endl;

    while(i<=r-1 and j>=0){
        if(a[i][j] == key){
                  cout<<"Found at a["<<i<<"]["<<j<<"]"<<endl;
         break;
        }
        else if(a[i][j] > key)
              j--;
        else
          i++;
    }
}

int main()
{
   int r,c;
   cin>>r>>c;
   int a[100][100];
   for(int i=0;i<r;i++){
       for(int j=0;j<c ; j++){
           cin>>a[i][j];
       }
   }
   
   int key;
   cin>>key;
   staircaseSearch(a , r,c ,key );
    
}
