#include <iostream>
using namespace std;

void staircaseSearch(int a[100][100], int n, int key){
    int startRow =0 ;
    int endCol=n-1;
    int flag=0;
    while(startRow<n and endCol>=0){
        if(key == a[startRow][endCol]){
            cout<<"Found at a["<<startRow<<"]["<<endCol<<"]";
            flag = 1;
            break;
        }
        
       else if(key<a[startRow][endCol]){
           endCol--;
       }
       
       else if(key>a[startRow][endCol]){
           startRow++;
       }
    }
    
    if(flag == 0)
      cout<<"Key Not found ";
}

int main()
{
   int n;
   cin>>n;
   int a[100][100];
   for(int i=0;i<n;i++){
       for(int j=0;j<n ; j++){
           cin>>a[i][j];
       }
   }
   
   int key;
   cin>>key;
   staircaseSearch(a , n ,key );
    
}
